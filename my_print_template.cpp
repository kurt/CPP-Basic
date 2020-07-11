//scriptname: my_print_template.cpp
// g++ -std=c++11 -o mpt my_print_template.cpp 

#include <iostream>
#include <string>

using namespace std;

template<typename T>
void Print(T value){
    cout << value << endl;
}

int main(){
    Print(5);
    Print("Hello");
    Print(5.5);
}
