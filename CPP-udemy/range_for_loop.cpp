#include <iostream>


int main(){
  using namespace std;
  int arr[] = {1,3,4,5,6,7,89,12};
  for(const auto  &x : arr){
     cout << x << "\n";
  }
  // ------------------
  int *beg = arr;
  int *end = arr+8;
  
  while (beg != end){
	  cout << *beg << "\n";
	  ++beg;
  }
  
  int *begNew = std::begin(arr);  //added in C++11
  int *endNew = std::end(arr);    // added
  while (begNew != endNew){
	  cout << *begNew << "\n";
	  ++begNew;
  }
  
}