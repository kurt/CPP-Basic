// g++ -std=c++11 -o unique_ptr unique_pointer.cpp

#include <iostream>
#include <memory>

class Entity
{
public:
     Entity(){
          std::cout << "Created an Entity" << std::endl;
}
    ~Entity(){
          std::cout << "Deleted an Entity" << std::endl;
}

}; //end of class Entity



int main(){

    {
        std::unique_ptr<Entity> local_entity= std::make_unique<Entity>();
    }
    // the unique pointer gets deleted after the scope closes....
}
