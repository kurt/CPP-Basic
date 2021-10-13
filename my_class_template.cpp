//scriptname: my_class_template.cpp
// g++ -std=c++11 -o mct my_class_template.cpp 



#include <iostream>
#include <string>

using namespace std;

template<int N> 
class Array{
 private:
    int my_Array[N]; //make an int array
 public: 
    int GetSize() const {return N;}
};//end of Array class


template<typename T, int N> //pass in a type and a value
class cust_Array{
 private:
    T my_array[N]; // make an array of type T and size N
 public:
    int GetSize() const {return N;}
    //char* GetType() const {return typeid(my_Array).name()}
};//end of cust_Array class

int main(){
    Array<5> array;
    cout << array.GetSize() << endl;
    cust_Array<float,2> array2;       //create a float template with a size of 2
    cout << array2.GetSize() << endl;
    //cout << array2.GetType() << endl;
}
