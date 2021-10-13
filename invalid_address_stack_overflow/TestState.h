#pragma once
#include "State.h"
#include <iostream>

class TestState : public State
{
public:
    TestState();
    ~TestState();

    void Init();
    void Deinit();
    void Reinit();
};
