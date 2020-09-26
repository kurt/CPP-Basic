#pragma once

#include <iostream>

class State
{
public:
    State();
    virtual ~State();

    virtual void Init();
    virtual void Reinit();
    virtual void Deinit();
};
