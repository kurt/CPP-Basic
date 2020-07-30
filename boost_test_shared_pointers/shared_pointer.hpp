//#pragma once

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
     
};



namespace shared_pointer
{
     std::shared_ptr<Entity> the_og_entity = std::make_shared<Entity>();
}
