import numpy as np
import cv2
from collections import defaultdict

def exclude_empty(data: dict):
    return {k: v for k, v in data.items() if v is not None}


def explode_xy(xy):
    xl=[]
    yl=[]
    for i in range(len(xy)):
        xl.append(xy[i][0])
        yl.append(xy[i][1])
    return xl,yl
def shoelace_area(x_list,y_list):
    a1,a2=0,0
    x_list.append(x_list[0])
    y_list.append(y_list[0])
    for j in range(len(x_list)-1):
        a1 += x_list[j]*y_list[j+1]
        a2 += y_list[j]*x_list[j+1]
    l=abs(a1-a2)/2
    return l

def on_segment(p, q, r):
    # check if r lies on (p,q)
    if r[0] <= max(p[0], q[0]) and r[0] >= min(p[0], q[0]) and r[1] <= max(p[1], q[1]) and r[1] >= min(p[1], q[1]):
        return True
    return False

def orientation(p, q, r):
    # return 0/1/-1 for colinear/clockwise/counterclockwise
    val = ((q[1] - p[1]) * (r[0] - q[0])) - ((q[0] - p[0]) * (r[1] - q[1]))
    if val == 0 : return 0
    return 1 if val > 0 else -1

def intersects(seg1, seg2):
    # check if seg1 and seg2 intersect

    p1, q1 = seg1
    p2, q2 = seg2
    # print('seg1: ',seg1)
    # print('seg2: ',seg2)
    # print('p1: ',p1)
    # print('p2: ',p2)
    # print('q1: ',q1)
    # print('q2: ',q2)

    o1 = orientation(p1, q1, p2)
    # find all orientations

    o2 = orientation(p1, q1, q2)
    o3 = orientation(p2, q2, p1)
    o4 = orientation(p2, q2, q1)

    if o1 != o2 and o3 != o4:
# check general case

        return True

    if o1 == 0 and on_segment(p1, q1, p2) : return True
# check special cases

    if o2 == 0 and on_segment(p1, q1, q2) : return True
    if o3 == 0 and on_segment(p2, q2, p1) : return True
    if o4 == 0 and on_segment(p2, q2, q1) : return True

    return False

def pDistance(x, y, x1, y1, x2, y2):
    """
    return :
        [dis]: distance from point(x,y) to line(x1,y1, x2,y2)
        [param]: if 0 < param < 1 : reflection of point to line is between 2 points
    """
    if((x==x1 and y==y1) or (x==x2 and y==y2)):
        return -1,-1

    A = x - x1
    B = y - y1
    C = x2 - x1
    D = y2 - y1

    dot = A * C + B * D
    len_sq = C * C + D * D
    param = -1
    if (len_sq != 0): #in case of 0 length line
        param = dot / len_sq

    # let xx, yy

    if (param < 0):
        xx = x1
        yy = y1
    elif (param > 1):
        xx = x2
        yy = y2
    else:
        xx = x1 + param * C
        yy = y1 + param * D


    dx = x - xx
    dy = y - yy
    dis =  (dx * dx + dy * dy)**0.5
    return dis,param

def assert_point(points):
    points = np.array(points).reshape(-1,2).tolist()
    if len(points)<=2:
        return False
    lines = []
    for i in range(len(points)-1):
        lines.append([points[i],points[i+1]])
    lines.append([points[-1],points[0]])
    for i in range(len(lines)):
        for j in range(i,len(lines)):
            if j-i<=1 or (i==0 and j==len(lines)-1):
                continue
            if intersects(lines[i],lines[j]):
                return False

    return True


def check_box_in_polygons(polygons,box): # box : [x1,y1,x2,y2]
    x_center = (box[0] + box[2]) / 2.
    y_center = (box[1] + box[3]) / 2.
    point = (x_center, y_center)
    # print("polygons: ",polygons)
    # print("box: ",box)
    # print("point: ",point)
    if not polygons:
        return True
    for polygon in polygons:
        print("polygon: ",polygon)
        polygon_ = np.array(polygon,np.int32).reshape((-1,1,2))
        if cv2.pointPolygonTest(polygon_, point, False)!=-1:
            return True
    return False


def check_duplicate_urls(imageUrls):
    url_counts = defaultdict(list)

    # Iterate over the imageUrls list and store the indices for each URL
    for i, url in enumerate(imageUrls):
        url_counts[url].append(i)

    # Find the URLs with multiple occurrences
    duplicate_urls = [url for url, indices in url_counts.items() if len(indices) > 1]

    if duplicate_urls:
        # Duplicates found
        message = "Duplicates found for the following URLs:"
        for url in duplicate_urls:
            indices = url_counts[url]
            message += f"\nURL: {url}, Indices: {indices}"
    else:
        # No duplicates found
        message = ""

    return message



def calculate_face_angle_score(landmarks):
    
    # threshold = 0.1

    x1,y1,x4,y4,x_nose,y_nose,x3,y3,x2,y2 = landmarks
    xi = ((x1 * y2 - y1 * x2) * (x3 - x4) - (x1 - x2) * (x3 * y4 - y3 * x4)) / ((x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4));
    yi = ((x1 * y2 - y1 * x2) * (y3 - y4) - (y1 - y2) * (x3 * y4 - y3 * x4)) / ((x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4));
    length = ((xi - x_nose) * (xi - x_nose) + (yi - y_nose) * (yi - y_nose)) + 1;
    d1 = ((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3)) ** 0.5;
    d2 = ((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2)) ** 0.5;
    d3 = ((x2 - x4) * (x2 - x4) + (y2 - y4) * (y2 - y4)) ** 0.5;
    d4 = ((x4 - x1) * (x4 - x1) + (y4 - y1) * (y4 - y1)) ** 0.5;
    norm = (d1 + d2 + d3 + d4) / 4.0 + 1;
    score = 1 - length / norm;
    return score;

def calculate_blur_score(image):

    # threshold 100
    height,width,_ = image.shape
    h1 = int(height*0.1)
    h2 = int(height*0.9)
    w1 = int(width*0.1)
    w2 = int(width*0.9)
    image_ = cv2.resize(image[h1:h2,w1:w2,:],(320,320))
    
    gray_image = cv2.cvtColor(image_, cv2.COLOR_BGR2GRAY)

    gradient_x = cv2.Sobel(gray_image, cv2.CV_64F, 1, 0, ksize=5)
    gradient_y = cv2.Sobel(gray_image, cv2.CV_64F, 0, 1, ksize=5)

    gradient_magnitude = np.sqrt(gradient_x**2 + gradient_y**2)

    blur_score = np.mean(gradient_magnitude)

    return blur_score

def calculate_brightness(image):
    #threshold 40
    height,width,_ = image.shape
    h1 = int(height*0.1)
    h2 = int(height*0.9)
    w1 = int(width*0.1)
    w2 = int(width*0.9)
    

    if len(image.shape) == 3:
        gray_image = cv2.cvtColor(image[h1:h2,w1:w2,:], cv2.COLOR_BGR2GRAY)
    else:
        gray_image = image[h1:h2,w1:w2,:]
    brightness = np.mean(gray_image)

    return brightness