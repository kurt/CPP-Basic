

#include <iostream> 
#include <thread> 
#include <semaphore.h>

sem_t semaphore;
sem_t semaphore2;

void foo(int param){
  //while(1){
   sem_wait(&semaphore2);
   std::cout << param << "\n";
   sem_post(&semaphore2);
 // }
}


void food(void){
  //while(1){
   sem_wait(&semaphore);
   sem_wait(&semaphore2)
   //sem_getvalue();
   //thread1.join()
   std::cout << "Waited for the other" << "\n";
   sem_post(&semaphore2);
   sem_post(&semaphore);
  //}
}

int main(){
  sem_init(&semaphore,0,1);
  sem_init(&semaphore2,0,1); 
  //pthread_t threads[2];
  int params =1;
  std::thread thread1(foo, params);  
  std::thread thread2(food);
  thread1.join();
  thread2.join();

  sem_destroy(&semaphore);
}
