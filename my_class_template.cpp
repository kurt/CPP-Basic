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
};//end of Array class


template<typename T, int N>
class cust_Array{
 private:
    T my_array[N];
 public:
    int GetSize() const {return N;}
    //char* GetType() const {return typeid(my_Array).name()}
};//end of cust_Array class

int main(){
    Array<5> array;
    cout << array.GetSize() << endl;
    cust_Array<float,2> array2;
    cout << array2.GetSize() << endl;
    //cout << array2.GetType() << endl;
}
