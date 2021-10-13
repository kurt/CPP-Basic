#include <iostream>
using namespace std;

void PrintStuff(int count, char ch){
    for (int i =0; i <count; i++){
	    cout << ch;
	}
    cout <<"\n";
}


void EndMessage(){
	cout << "Terminating Program" << "\n";
	
}

int main(){
    PrintStuff(6,'*'); //call things normally
    void(*funcPtr) (int,char) = PrintStuff;
    (*funcPtr)(9,'2');
    funcPtr(4,';');
	atexit(EndMessage); //could call destructors - clean up memory etc
	cout << "end of main loop" << "\n";
	return 0;
}