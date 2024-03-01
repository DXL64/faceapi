import os
import sys
from pathlib import Path
import subprocess
import shutil
import multiprocessing
import concurrent
from concurrent.futures import ProcessPoolExecutor


npcu = multiprocessing.cpu_count()
pool = ProcessPoolExecutor(max_workers=6)


source_path = sys.argv[1]
print(source_path)
dst = "shared"
stage_dir = "tmp"
optim = "-O0 -ggdb"
if os.path.exists(dst):
    shutil.rmtree(dst)
os.makedirs(dst, True)
os.chmod(dst, 0o755)


def action(stage_dir, path):
    relative_dir = path.replace(source_path, "").split("/")[1:-1]
    relative_dir = "/".join(relative_dir)
    dst_dir = f"{dst}/{relative_dir}"
    os.makedirs(dst_dir, exist_ok=True)
    if os.path.basename(path) != "__init__.py":
        command = [
            sys.executable,
            "-m",
            "nuitka",
            "--module",
            "--enable-plugin=pylint-warnings",
            "--output-dir=%s" % stage_dir,
            "--remove-output",
            "--nofollow-imports",
            "--quiet",
            "--no-progressbar",
            path
        ]

        # command += path
        print("".join(command))
        result = subprocess.call(command)
        if result != 0:
            sys.exit(result)
        filename = os.path.basename(path).split(".")[0]
        shutil.move(f"{stage_dir}/{filename}.cpython-39-x86_64-linux-gnu.so", dst_dir)
    else:
        pass



list_srcs = [
    *Path(source_path).glob("common/*/*.py"),
    *Path(source_path).glob("configs/*.py"),
    *Path(source_path).glob("routers/*/*.py"),
    *Path(source_path).glob("routers/*.py"),
    *Path(source_path).glob("utils/*.py"),
    *Path(source_path).glob("dependencies.py")
]

list_jobs = []
for path in list_srcs:
    list_jobs.append(pool.submit(action, stage_dir, str(path)))

for future in concurrent.futures.as_completed(list_jobs):
    try:
        data = future.result()
    except Exception as exc:
        print(f"generated an exception: {exc}")
    else:
        pass
        
print("done!")
