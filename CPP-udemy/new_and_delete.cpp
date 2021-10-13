#include <iostream>
#include <cstring>


int main(){
   int *p = new int(5);
   std::cout << *p << "\n";
   delete p;
   p = nullptr; //point nowheres
   
   
   //arrays with new 
   int *array = new int[4];
   for (int i =0;i<4; i++){
	   array[i] = i;
	   std::cout << array[i];
   }
   std::cout << "\n";
   delete []array;
   array = nullptr;
   
   // Using uniform initialization
   int *array2 = new int[4]{1,2,4,5};
   for (int j =0;j<4; j++){
	   std::cout << array2[j];
   }
   std::cout << "\n";
   delete []array2;
   array2 = nullptr;
   
   //String arrays
   char *p2 = new char[4];
   strcpy(p2,"C++");
   std::cout << p2 << "\n";
   delete []p2;
   p2=nullptr;
   
   // 2d array 
   int *pA = new int[3]{1, 2, 3};
   int *pB = new int[3]{4, 5, 6};
   int **pData = new int *[2];
   pData[0] = pA;
   pData[1] = pB;
   
   
   std::cout << pData[0][2] << "\n";
   
   //num of deletes should equla num of news 
   delete []pA;
   delete []pB;
   delete []pData; 
   
   
   
}