//scriptname: my_class_template.cpp

#include <iostream>
#include <string>

using namespace std;

template<int N>
class Array{
 private:
    int my_Array[N];
 public: 
    int GetSize() const {return N;}
};//end of array class

int main(){
    Array<5> array;
    cout << array.GetSize() << endl;
}
