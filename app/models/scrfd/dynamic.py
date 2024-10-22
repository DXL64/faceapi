import onnx
from onnx import helper
from onnx import shape_inference

ONNX_PATH = 'models/scrfd/scrfd-nms-full.nms.onnx'
model = onnx.load(ONNX_PATH)

for node in model.graph.node:
    if node.op_type == "BatchedNMSCustomDynamic_TRT":
        model.graph.node.remove(node)

# out = ["num_detections", "nmsed_boxes", "nmsed_scores", "nmsed_classes", "nmsed_landmarks"]


for node in model.graph.output:
    print("REMOVE:", node.name)
    model.graph.output.remove(node)

for node in model.graph.output:
    print("REMOVE1:", node.name)
    model.graph.output.remove(node)

for node in model.graph.output:
    print("REMOVE2:", node.name)
    model.graph.output.remove(node)

output_names = ["bboxes", "scores", "kps"]
value_info_protos = []

shape_info = onnx.shape_inference.infer_shapes(model)
for idx, node in enumerate(shape_info.graph.value_info):
    if node.name in output_names:
        print(idx, node)
        value_info_protos.append(node)
        
model.graph.output.extend(value_info_protos)

# for name in output_names:
#     intermediate_layer_value_info = helper.ValueInfoProto()
#     intermediate_layer_value_info.name = name
#     model.graph.output.append(intermediate_layer_value_info)
        

# for node in model.graph.node:
#     for output in node.output:
#         for value_info in model.graph.value_info:
#             if value_info.name == output:
#                 shape = value_info.type.tensor_type.shape
#                 if shape.dim[0].dim_value:
#                     shape.dim[0].dim_value = -1

# for output in model.graph.output:
#     if output.type.tensor_type:
#         shape = output.type.tensor_type.shape
#         shape.dim[0].dim_value = -1

# Save the modified model
output_model_path = 'models/scrfd/scrfd-modified.onnx'
onnx.save(model, output_model_path)


for output in model.graph.output:
    print(output.name)

onnx.checker.check_model(model)
