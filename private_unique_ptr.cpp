#include <iostream>
#include <memory>
#include <thread>
#include <vector>

using namespace std;
class ParentEntity{
   public:
   ParentEntity(){cout<< "Create Parent" << "\n";};
   ~ParentEntity(){cout << "Destroy Pareny" <<"\n";};
   void function_call(){
      cout << "function call" << "\n";
   }
};


class Entity{
   public:
   Entity(){cout<< "Create Entity" << "\n";};
   ~Entity(){cout<< "Destroy Entity" << "\n";};
   void function(int i){
       cout << "do nothing" << "\n";
       m_model->function_call();
   }
   void runAThread();
   private:
   unique_ptr<ParentEntity> m_model;


};

void this_func(Entity *e){
    //e->function();
}

void Entity::runAThread(){
   std::thread thread1(&Entity::function, this, 1); 
   thread1.join();
}

int main(){

   Entity e;
   e.runAThread();
   //this_func(&e);
   //std::thread thread1(&Entity::function, this, 1); 
  // thread1.join(); 
   //std::vector<std::thread> thread1vec;
   //thread1vec.push_back(std::thread(this_func,e));
   //thread1vec.at(1).join();
   for (int i=0;i<6;i++){
      //thread1vec.push_back(std::thread(this_func,e));
      //thread1vec.at(i).join();
   }
   //e.function();
}
