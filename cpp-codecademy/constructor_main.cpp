//g++ -o constructor constructor_main.cpp constructor_functions.cpp constructor_header.hpp
#include <iostream>
#include "constructor_header.hpp"

int main() {
   Song back_to_black("Back to Black", "Amy Winehouse");
   std::cout << back_to_black.get_artist() << "\n";
  
}