#include "State.h"

State::State()
{
}

State::~State()
{
    std::cout << "Destroying State!" << std::endl;
}

void State::Init()
{
    std::cout << "Initialized State!" << std::endl;
}

void State::Deinit()
{
}

void State::Reinit()
{
}
