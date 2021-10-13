/* system example : DIR */
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* system, NULL, EXIT_FAILURE */
#include <iostream>
#include <fstream>
#include <string>

int main ()
{
  int i,num_proc;
  printf ("Checking if processor is available...");
  if (system(NULL)) puts ("Ok");
    else exit (EXIT_FAILURE);
  printf ("Executing command DIR...\n");

  // Execute command "dir"
  i=system ("dir");
  printf ("The value returned was: %d.\n",i);
  //---------------------------
  //See the number of processes used
  system("ps -eo pid | wc -l > example.txt");
  std::string line;
  std::ifstream myfile("example.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      //std::cout << line << '\n';
      num_proc = stoi(line);
      std::cout << num_proc << "\n";
    }
    myfile.close();
  }
  else std::cout << "Unable to open file"; 
  //while (std::getline(proc.out(), line))
  //  std::cout << "stdout: " << line << '\n';
  printf ("The value returned was: %d.\n",num_proc);
  //---------------------------
  // Save the top ten processes being used
  system("ps aux --sort=-%mem | head > processes.txt"); 
  
  // Save the memory usage 
  system("free -m > memory usage");
  return 0;
}
