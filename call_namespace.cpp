//g++ -std=c++11 -o test call_namespace.cpp namespace.h 

#include "namespace.h"
using namespace std;

int main () {
	kurts_space::func();
	kurts_space::kurts t;
	t.func2(); //calls the function within the structure
}
