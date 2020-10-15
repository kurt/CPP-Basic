#include <iostream>

class RandomClass{
   public:
   RandomClass() = default;
   void print_method(){
       std::cout << "RandomClass" << "\n";
   } 


};




class MainClass{
   public:
   MainClass() = default;
   void call_print();

};


RandomClass rc; 
void MainClass::call_print(){
    rc.print_method();
}



int main(){
   MainClass mc;
   mc.call_print();

}
