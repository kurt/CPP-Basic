#include <iostream>
using namespace std;


int main(){

   try{
     int momsAge = 25;
     int sonsAge = 30;
     if (sonsAge > momsAge){
         throw 99;
     }
   }catch(int x){
       cout << "This is the number I caught: " << x << "\n"; 
   }
}
