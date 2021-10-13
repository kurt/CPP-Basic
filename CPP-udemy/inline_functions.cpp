#include <iostream>

// a macro
#define Square(x) x*x

inline int Cube(int x){
	 return x*x*x;
}


int main (){
    using namespace std;
	int val = 5;
	int res = Square(val);
	cout << res << "\n";
	res = Square(val + 1 );
	cout << res << " a bug" <<"\n";
	res = Cube(val);
	cout << res << "\n";
	return 0;
}