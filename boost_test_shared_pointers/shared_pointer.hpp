#ifndef    SHARED_HEADER_H
#define    SHARED_HEADER_H


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
} //end of namespace

std::shared_ptr<Entity> func_create_pointer(){ 
    std::shared_ptr<Entity> the_created_entity = std::make_shared<Entity>();
    return the_created_entity;
}

#endif //end of header
