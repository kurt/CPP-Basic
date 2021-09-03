#include <iostream> 

int Add(int *a, int *b);
void AddVal(int *a, int *b, int *result);
void Swap(int *a, int *b);
void Factorial(int *a, int *result);

int main(){
	//int *a, *b;
	int valA = 4;
    int valB = 5;
    int valC{};
	int *a = &valA;
	int *b = &valB;
	//int a{1};
	//int b{2};
	//----------------
	int c{};
	c = Add(a,b);
	std::cout << "The Add is " <<"\n";
	std::cout << c << "\n";
	//----------------
	int *Res = &valC;
	AddVal(a,b,Res);
	std::cout << "The AddVal is " <<"\n";
	std::cout << *Res << "\n";
	//-----------------
	std::cout << "a=" << *a << " b="<< *b <<"\n";
	Swap(a,b);
	std::cout << "After Swap" << "\n";
	std::cout << "a=" << *a << " b="<< *b <<"\n";
	//----------------
	Factorial(a,Res);
	std::cout << *a <<" Factorial is " << *Res <<"\n";
	
}



int Add(int *a, int *b){

   int ans{};
   ans = *a + *b;
   return ans;

}


void AddVal(int *a, int *b, int *result){
   *result = *a + *b;

}

void Swap(int *a, int *b){
   int temp{};
   temp = *a;
   *a=*b;
   *b=temp;
}

void Factorial(int *a, int *result){
   *result = 1;
   for(int i=1;i<=*a;i++){
      *result = *result*i; 
   }
}