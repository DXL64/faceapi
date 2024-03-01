import os
import sys
from pathlib import Path

from setuptools import setup
from setuptools.extension import Extension

from Cython.Build import cythonize
from Cython.Distutils import build_ext


source_path = os.getenv("FACEAPI_SOURCE", ".")
dst_dir = "shared"

list_exts = []

def make_ext(ext_path: str, dst_dir: str = 'shared'):
    ext_path = Path(ext_path)
    shared_path = Path(dst_dir)/ext_path.relative_to(Path(source_path))
    os.makedirs(shared_path.parent, exist_ok=True)
    name = str(shared_path.with_suffix('')).replace(os.path.sep, '.')
    print("name: ", name, ext_path)
    return Extension(name=name, sources=[str(ext_path)])



for path in Path(source_path).glob("common/*/__init__.py"):
    list_exts.append(make_ext(path, dst_dir))

for path in Path(source_path).glob("common/__init__.py"):
    list_exts.append(make_ext(path, dst_dir))

for path in Path(source_path).glob("configs/__init__.py"):
    list_exts.append(make_ext(path, dst_dir))

for path in Path(source_path).glob("routers/__init__.py"):
    list_exts.append(make_ext(path, dst_dir))

for path in Path(source_path).glob("utils/__init__.py"):
    list_exts.append(make_ext(path, dst_dir))


setup(
    name = "FaceAPI",
    ext_modules = cythonize(
        list_exts,
        build_dir = "build",
        compiler_directives = dict(
            always_allow_keywords=True,
            language_level=3,
            # iterable_coroutine=True,
            c_string_type="bytes",
            annotation_typing=True
        )
    ),
    cmdclass=dict(
        build_ext=build_ext
    ),
    packages=["API"]
)

        
print("done!")
