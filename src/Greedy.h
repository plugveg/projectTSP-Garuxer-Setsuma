#pragma once

#include "Solver.h"

class Greedy : public Solver {
public :
    void operator()(Solution &_sol, EvalTSP &_eval) override;
};