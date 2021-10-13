
#include <iostream>


class RandomClass{
    private:
	    float val{1.23};
	    int passengers{0};
	public:
	    int pubCont{12};
	    void PrintVals();
        void AddPass(int passengers);

};


void printClass(const RandomClass &car);

void RandomClass::PrintVals(){
    std::cout << this->val << "\n";

}

void RandomClass::AddPass(int passengers){
	this->passengers=passengers;
	std::cout << this->passengers <<"\n";
	printClass(*this);
}

void printClass(const RandomClass &car){
	std::cout << "Class Details" << "\n";
	//std::cout<< "RandomClass val: " << car.val << "\n"; - private
	//std::cout<< "RandomClass val: " << car.passengers << "\n"; - private
	std::cout<< "RandomClass public content: " << car.pubCont << "\n";
}

int main(){
    RandomClass rc;
	rc.PrintVals();
    rc.AddPass(10);

}