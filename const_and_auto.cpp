//const_and_auto.cpp
//g++ -std=c++11 -o a const_and_auto.cpp 

#include <iostream>
#include <string>

using namespace std;

class Entity{
 private:
    int x;
 public:
    int GetX() const{
        return x;
    }

    void SetX(int x_temp){
        x=x_temp;
    }

};//end of clas Entity

void PrintEntity(const Entity& e){
    cout << e.GetX() << endl;
}

int main(){
    int random_num=5;
    int multiplier=2;
    auto res = random_num*multiplier;
    const int Max = 10;

    Entity my_entity;
    my_entity.SetX(10);
    PrintEntity(my_entity);
}//end of main
