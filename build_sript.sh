rm -r  build
mkdir build

#for f in *.cpp; do g++ -std=c++11 $f -o build/$f; done

g++ -std=c++11 templates.cpp -o build/templates
#g++ -std=c++11 private_unique_ptr.cpp -o build/private_unique_ptr
