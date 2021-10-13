#include <string>
#include <iostream>

//g++ -std=c++11 uniform_initialization.cpp -o uniform_init 
int main(){

  int a1; // uninitialized
  int a2 = 0; // Copy initialization
  int a3(5); //direct initialization
  std::string s1; //direct initialization - with the constructor of string
  std::string s2("C++"); //Direct initialization

  int b1{}; //value initialization
  int b2{5}; // direct initialization
  
  char asd[8]{};// null initialization of a char array 
  
  int *p1 = new int{};
  
  void *ptr = nullptr;

}