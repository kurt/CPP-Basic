#include <iostream>
#include <array>
#include <exception>
#include <map>
#include <memory>
#include <set>
#include <string>
#include <vector>

using namespace std;


namespace kurts_space{
	void func(){
		cout << "Inside first_space" << endl;
	}

	struct kurts{
		int id;
		int desk;
		void func2(){cout << "Inside kurts space" << endl;}
	};
}



