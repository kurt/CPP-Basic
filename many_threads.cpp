
#include <iostream>
#include <mutex>  // For std::unique_lock
#include <shared_mutex>
#include <thread>
#include <chrono>     
#include <vector>

using namespace std;

void print(int n, const std::string &str)  {
  std::string msg = std::to_string(n) + " : " + str;
  std::cout << msg  << std::endl;
}

void print2(){
  std::cout << "HI" << "\n";
}
 
int main() {
  std::vector<std::string> s = {
      "Educative.blog",
      "Educative",
      "courses",
      "are great"
  };
  std::vector<std::thread> threads;
  std::vector<std::thread> threads2;
  for (int i = 0; i < s.size(); i++) {
    threads.push_back(std::thread(print, i, s[i]));
    threads.push_back(std::thread(print2));
  }
  
  for (auto &th : threads) {
    th.join();
  }
  for (auto &th : threads2) {
    th.join();
  }
  return 0;
}

