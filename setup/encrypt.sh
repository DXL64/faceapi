rm -rf /root/.cache/Nuitka/
# conda run --no-capture-output -n vinfast pip install unidecode
conda run --no-capture-output -n faceapi python setup_nuitka.py /tmp/app
conda run --no-capture-output -n faceapi python setup_cython.py build_ext
cp -r build/lib.linux-x86_64-cpython-39/shared/* shared/ 
cd /tmp/app/shared && tar -czvf ../shared.tar.gz *
