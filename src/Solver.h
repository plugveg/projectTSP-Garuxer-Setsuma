#pragma once

#include "Solution.h"

class Solver {
public:
    virtual void operator()(Solution &_sol) = 0;
};