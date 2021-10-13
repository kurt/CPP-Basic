#include <iostream>

extern "C"
{
  #include <stdio.h>
}



extern "C" void printInC(int a){
    printf("The value is %d \n\r",a);
}

void myOwnFunction(int a){
	std::cout << a << "\n";
}

int main(){

   int a{11};
   printInC(a);
   myOwnFunction(a);
}