import os

if os.path.isdir('build'):
    os.system("rm -r  build")

os.system("mkdir build")

os.system("g++ -std=c++11 templates.cpp -o build/templates")
os.system("g++ -std=c++11 basic_references.cpp -o build/basic_references")
