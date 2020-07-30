// g++ -std=c++11 -o shared_ptr shared_pointers.cpp
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
     void PrintFunc(){
	  std::cout << "This is a print" << std::endl;
}
     
}; //end of class Entity



int main(){

 {
    std::shared_ptr<Entity> outside_entity;
    {
        std::shared_ptr<Entity> the_og_entity = std::make_shared<Entity>();
        std::shared_ptr<Entity> copy_og_entity = the_og_entity;
        outside_entity = the_og_entity;
        outside_entity -> PrintFunc(); // calls the function of the_og_entity
        std::shared_ptr<Entity> brand_new_entity = std::make_shared<Entity>();
    }
 }

}

/*
prints out 
Created an Entity : std::shared_ptr<Entity> the_og_entity = std::make_shared<Entity>();
This is a print   : outside_entity -> PrintFunc(); 
Created an Entity : std::shared_ptr<Entity> brand_new_entity = std::make_shared<Entity>();
Deleted an Entity : og
Deleted an Entity : new

*/
