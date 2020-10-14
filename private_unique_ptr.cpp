#include <iostream>
#include <memory>
#include <thread>
#include <vector>
#include <chrono>   

int thread_count = 0;

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
   void function2(){
       cout << "do something" << "\n";
   }
   void runAThread();
   void runOtherThread();
   std::vector<std::thread> thread1vec;
   std::vector<std::thread> thread2vec;
   private:
   unique_ptr<ParentEntity> m_model;


};

void this_func(Entity *e){
    //e->function();
}

void Entity::runAThread(){
   thread1vec.push_back(std::thread(&Entity::function, this, 1));
   //std::thread thread1(&Entity::function, this, 1); 
   thread1vec.at(thread_count).join();
   thread_count--;
}

void Entity::runOtherThread(){
   thread2vec.push_back(std::thread(&Entity::function2,this));
   thread2vec.at(0).join();
}

int main(){


//for (int i    
  // if (){


  // }
   Entity e;
   e.runOtherThread();
   // Entity e;
   //std::this_thread::sleep_for (std::chrono::seconds(5));
   //this_func(&e);
   //std::thread thread1(&Entity::function, this, 1); 
  // thread1.join(); 
   //std::vector<std::thread> thread1vec;
   //thread1vec.push_back(std::thread(this_func,e));
   //thread1vec.at(1).join();
   for (int i=0;i<6;i++){
       Entity e;
       e.runAThread();
       thread_count++;
      //thread1vec.push_back(std::thread(this_func,e));
      //thread1vec.at(i).join();
   }
   //e.function();
}
