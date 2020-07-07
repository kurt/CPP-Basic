//g++ -std=c++11 -o vf virtual_functions.cpp 

#include <iostream>
#include <string>

class Entity{
public:
    std::string virtual GetName() {return "Entity";}
};

class Player : public Entity { //subclass of Entity
private: 
    std::string my_name;
public:
    Player(const std::string& name) : my_name(name) {}
    std::string GetName() override {return my_name;}
};

void PrintName(Entity* e){
    std::cout << e->GetName() << std::endl;
}

int main(){
    Entity* example_entity = new Entity();
    PrintName(example_entity);
    // std::cout << example_entity->GetName() << std::endl;
    Player* example_player = new Player("Kurt");
    PrintName(example_player);
    // std::cout << example_player->GetName() << std::endl;
}
