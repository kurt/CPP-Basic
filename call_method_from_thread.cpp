//g++ call_method_from_thread.cpp -o call_method_from_thread -pthread

#include <thread>
#include <iostream>

class Test
{
public:
  Test(){};
  ~Test(){};
  void runMultiThread();
private:
  int calculate(int from, int to);
};  

int Test::calculate(int from, int to){
   std::cout << to << "\n";
   return from;
}

void Test::runMultiThread()
{
    std::thread t1(&Test::calculate, this,  0, 10);
    std::thread t2(&Test::calculate, this, 11, 20);
    t1.join();
    t2.join();
}




int main(){
  Test test;
  test.runMultiThread();   

}
