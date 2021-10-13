#include <iostream>


namespace SpecialCase {
    void printVar(float var){
	    std::cout << "Special Case: " << var << "\n";
	}

}// end of SpecialCase namespace

namespace Basic {
    void printVar(float var){
	    std::cout << "Regular Case: " << var << "\n";
	}
}//end of Basic Namespace

namespace Parent{
	void ParentFunc1(){
		std::cout << "Parent 1" << "\n";
	}
	void ParentFunc2(){
		std::cout << "Parent 2" << "\n";
	}
	namespace Child{
		void ChildFunc1(){
			std::cout << "Child 1" << "\n";
		}
		void ChildFunc2(){
			std::cout << "Child 2" << "\n";
		}
	}//end of Child namespace
	
}// end of Parent namespace

namespace {
	void NamelessFunction(){
		std::cout << "NamelessFunction" << "\n";
	}
	
} //end of nameless namespace - these functions cannot be accessed by other source files

void CallSpecialCase(float var){
    using namespace SpecialCase;
	printVar(var);
	return;
}

int main(){
    float var{123.4};
    CallSpecialCase(var);
    SpecialCase::printVar(var);
    using namespace Basic;
	printVar(var);
	//Calling nested namespaces
	Parent::Child::ChildFunc1();
	Parent::ParentFunc1();
	NamelessFunction(); // can only be called here
    return 0;
}