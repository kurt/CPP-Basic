

#include "TestState.h"
#include "State.h"
#include <memory>

int main()
{
   {
   std::shared_ptr<TestState> test = std::make_shared<TestState>();
    
   std::shared_ptr<TestState> state = test;

   state->Init();
   }
   //delete state; 
}
