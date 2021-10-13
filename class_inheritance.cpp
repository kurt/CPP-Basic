
#include <iostream>

class ParentClass{
   public:
   ParentClass() = default;
   int variable =10;
   void parent_func(){
       std::cout << "Parent Function" << "\n";
   }

};


class ChildClass : public ParentClass{
   public:
   ChildClass() = default;
   void child_func(){
      std::cout << variable << "\n";
   }

};


int main(){
   ChildClass cobj;
   cobj.child_func();
   cobj.parent_func();

}
