//g++ -std=c++11 -o construct constructors.cpp 
#include <iostream>

class KurtClass {
 private:
    int x,y;
 public:
    KurtClass(){
         x=10;
         y=10;
         PrintName(); // when the constructor is called this will run
}
    void PrintName(){std::cout << "Name" << std::endl;} //this gets run by the constructor
    void PrintData(){std::cout << "Data" << std::endl;} //this isnt run by the constructor

}; //end of KurtClass



int main(){
    KurtClass KurtObject;

}
