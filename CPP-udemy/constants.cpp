

#include <iostream>

void Print(const int *ptr);
void PrintNoChange(const int *const ptr);
void printRef(const int &ref);
using namespace std;

int main(){

   const float MOTOR_LIMIT = 3.005; //radians
   cout << "Value of the motor is " << MOTOR_LIMIT << "\n";
   
   const int CHUNK_SIZE = 512; //bytes
   const int *const ptr = &CHUNK_SIZE; //any pointer to a constant has to be constant as well
   
   int randVal = 10;
   cout << randVal << "\n";
   Print(&randVal);  
   PrintNoChange(&randVal);
   printRef(randVal);
   
   // -----------------------------
   int x = 5;
   const int MAX = 12;
   int &ref_x1 = x;
   const int &ref_x2 = x;
   ref_x1 =20;
   cout << ref_x1 << "\n"; // x is changed
   //ref_x2 = 30; - this cant change x 
   cout << ref_x2 << "\n"; // ref_x2 is also changed when ref_x1 was changed
   //----------------------------
    const int *ptr1 = &x ;
    int *const ptr2 = &x ;
    const int * const ptr3 = &x ;
    //*ptr1 = 21; cannot do this as the value is constant
	*ptr2 = 21; // can do this because the ptr is constant not the value 
	cout << *ptr2 << "\n";
	//ptr2 +=100;  - cannot do this as the ptr is constant
	// cant do anything to ptr 3
	cout << *ptr3 << "\n"; //the value does get modified by ptr2 though
	//----------------------------
	const int *ptr4 = &MAX ;
    //int *ptr5 = &MAX ;  --- doesnt work 
 
    const int &r1 =  ref_x2; // works 
    //int &r2 = ref_x2 ; - wont work different types 
 
    //int *&p_ref1 = ptr1 ; wont work 
    //const int*&p_ref2 = ptr2 ; wont work 
}

void Print(const int *ptr){
	
	//*ptr +=100; - cannot do this as value is constant
    // this next line can cause segmentation fault
	//ptr+=100; // can do this as the pointer address itself is not constant
	cout << *ptr << "\n";
	
}

void PrintNoChange(const int *const ptr){
	//*ptr +=100; - cannot do this as value is constant
    //ptr+=100;  cannot do this as the pointer address itself is constant
	cout << *ptr << "\n";
	
}

void printRef(const int &ref){
	// this ensures that the function cannot change the ref value
	cout << ref << "\n";
}