//g++ -std=c++11 -o test call_namespace.cpp namespace.hpp

#include "namespace.hpp"
using namespace std;

int main () {
	kurts_space::func();
	kurts_space::kurts t; //create a structure
	t.func2(); //calls the function within the structure
	t.func4();
}
