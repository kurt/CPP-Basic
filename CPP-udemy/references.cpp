

#include <iostream>
using namespace std;

void ADD(int a, int b, int &result);
void Factorial(int a, int &result);
void Swap(int &a, int &b);

int main(){
   int x = 10;

   int &ref = x;


   cout << x << "\n";
   cout << ref << "\n";

x = 11; 
cout << "New Value for x" << "\n";
cout << x << "\n";
cout << ref << "\n";

int y = 33;
ref = y;
cout << "New new Value for x" << "\n";
cout << x << "\n";
cout << ref << "\n";
//--------------------
int a{1};
int b{4};
int z{};
int &result = z;
ADD(a,b,result);
cout << a << "+" << b << "=" << z << "\n";
//--------------------
a = 14;
Factorial(a,result);
cout << a << " factorial is " << z << "\n";
//---------------------
int c{22};
int d{33};
int &refC = c;
int &refD = d;
	std::cout << "c=" << c << " d="<< d <<"\n";
	Swap(refC,refD);
	std::cout << "After Swap" << "\n";
	std::cout << "c=" << c << " d="<< d <<"\n";
}


void ADD(int a, int b, int &result){
	int res = a + b;
	result = res; 
}

void Factorial(int a, int &result){
   result = 1;
   for(int i=1;i<=a;i++){
      result = result*i; 
   }
	
}

void Swap(int &a, int &b){
	int val = a;
	a = b;
	b = val;
	
}