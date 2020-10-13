#include <iostream>
#include <mutex>  // For std::unique_lock
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
  
   /*
  auto increment_and_print = [&counter]() {
    for (int i = 0; i < 3; i++) {
      counter.increment();
      std::cout << std::this_thread::get_id() << ' ' << counter.get() << '\n';
 
      // Note: Writing to std::cout actually needs to be synchronized as well
      // by another std::mutex. This has been omitted to keep the example small.
    }
  };*/
  
 /* std::vector<std::thread> thread1;//(thread1Func);
  std::vector<std::thread> thread2;//(thread2Func);
  thread1.push_back(std::thread(thread1Func));
  thread1.push_back(std::thread(thread1Func));
  thread2.push_back(std::thread(thread2Func));*/
/* if (){
     std::thread thread(thread1Func);
 }*/


 std::thread thread1(thread1Func);
 std::thread thread2(thread2Func);
 std::thread thread3(thread2Func);
 std::thread thread4(thread1Func);
//while(1){
 /* for (auto &th : thread1) {
    th.join();
  }
  for (auto &th : thread2) {
    th.join();
  }*/
  /*std::this_thread::sleep_for (std::chrono::seconds(5));
  thread1.push_back(std::thread(thread1Func));
  for (auto &th : thread1) {
    th.join();
  }*/
  thread1.join();
  thread2.join();
  thread3.join();
  thread4.join();
  //thread1.join();
  //thread3.detach();
  //thread4.detach();
//}
   std::this_thread::sleep_for (std::chrono::seconds(5));
}
 
