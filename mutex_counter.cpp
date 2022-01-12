//How to compile this: 

#include <iostream>
#include <mutex>  
#include <shared_mutex>
#include <thread>
#include <chrono>     
#include <vector>
 
class MutexCounter {
 public:
  MutexCounter() = default;
 
  // Multiple threads/readers can read the counter's value at the same time.
  unsigned int read() const {
    std::shared_lock<std::shared_mutex> lock(mutex_);
    return value_;
  }
 
  // Only one thread/writer can increment/write the counter's value.
  void increment() {
    std::unique_lock<std::shared_mutex> lock(mutex_);
    value_++;
  }
    void decrement() {
    std::unique_lock<std::shared_mutex> lock(mutex_);
    value_--;
  }
 
 
 private:
  mutable std::shared_mutex mutex_;
  unsigned int value_ = 0;
};
 
MutexCounter counter;
MutexCounter counter2;

void thread1Func(void){
  int yes = 1;
  while(yes){
   if(counter2.read()==0){
        counter.decrement();
        std::cout << "Run this as much as needed" << "\n";
        counter.increment();
        yes = 0;
   }
  }
}

void thread2Func(void){
  int yes = 1;
  while(yes){
    if(counter.read()==0){
	counter.decrement();
        counter2.decrement();
        std::cout << "This runs without interruption" << "\n";
        counter.increment();
        counter2.increment();
        yes=0;
    }
   }
}

int main() {
  
  thread1.push_back(std::thread(thread1Func));
  thread1.push_back(std::thread(thread1Func));
  thread2.push_back(std::thread(thread2Func));*/

 std::vector<std::thread> thread1vec;
 std::vector<std::thread> thread2vec;
 int new_image=1;
 int new_person=1;
int img_counter=0;
int person_counter=0;
for (int i=0;i<6;i++){

 if(new_image){
    
    thread1vec.push_back(std::thread(thread1Func));
    thread1vec.at(img_counter).join();
    img_counter++;
 }

 if(new_person){   
    thread2vec.push_back(std::thread(thread2Func));
    thread2vec.at(person_counter).join();
    person_counter++;
 }
}
// std::thread thread1(thread1Func);
// std::thread thread2(thread2Func);
// std::thread thread3(thread2Func);
// std::thread thread4(thread1Func);

//  thread1.join();
//  thread2.join();
//  thread3.join();
//  thread4.join();
   std::this_thread::sleep_for (std::chrono::seconds(2));
}
 
