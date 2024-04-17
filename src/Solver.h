#pragma once

#include "Solution.h"
#include "EvalTSP.h"

class Solver {
public:
    virtual void operator()(Solution &_sol, EvalTSP &_eval) = 0;
};