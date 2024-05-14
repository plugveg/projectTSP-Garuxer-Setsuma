#pragma once

#include "Solution.h"
#include "EvalTSP.h"
#include "Solver.h"

class Neighbor : public Solver {
public:
    void operator()(Solution &_sol, EvalTSP &_eval) override;
    virtual void changeByIndex(Solution &_sol, int index);
    virtual int getNbNeighbor(Solution s) = 0;
    virtual std::pair<int, int> getNeighborIndex(Solution s, int index) = 0;
protected:
    std::pair<int, int> pair;
};
