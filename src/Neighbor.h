#pragma once

#include "Solution.h"
#include "EvalTSP.h"
#include "Solver.h"

class Neighbor : public Solver {
public:
    void operator()(Solution &_sol, EvalTSP &_eval) override;
    virtual void changeByIndex(Solution s, int index) = 0;
    int getNbNeighbor();
    int getNeighborIndex(Solution s, int index);
};
