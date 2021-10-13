#include "TestState.h"

TestState::TestState()
{
}

TestState::~TestState()
{
    std::cout << "Destroying TestState!" << std::endl;
}

void TestState::Init()
{
    std::cout << "Initialized TestState!" << std::endl;
}

void TestState::Deinit()
{
}

void TestState::Reinit()
{
}
