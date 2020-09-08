//g++ -std=c++11 -fprofile-arcs -o sig_hand signal_handling.cpp

//#include <signal.h>
#include <iostream>
#include <csignal>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <unistd.h>

extern "C" void __gcov_flush();

using namespace std;

void signalHandler( int signum ) {
   cout << "Interrupt signal (" << signum << ") received.\n";
   __gcov_flush();
   // cleanup and close up stuff here  
   // terminate program  

   exit(signum);  
}

void termHandler( int signum ) {
   cout << "Interrupt signal (" << signum << ") received.\n";
   //__gcov_flush();
   // cleanup and close up stuff here  
   // terminate program  

   exit(signum);  
}

int main () {
   // register signal SIGINT and signal handler  
   signal(SIGINT, signalHandler);  
   signal(SIGTERM, termHandler);
   while(1) {
      cout << "Going to sleep...." << endl;
      sleep(1);
   }

   return 0;
}
