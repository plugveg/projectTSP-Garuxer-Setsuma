#pragma once

#include "Neighbor.h"

class LocalSearch {
public:
    explicit LocalSearch(Neighbor &_neighbor);
    void setNeighbor(Neighbor &_neighbor);
    Solution bestImprover(Solution &_sol, EvalTSP &_eval);
    Solution descentAlgorithm(Solution &_sol, EvalTSP &_eval);
    Solution firstImprover(Solution &_sol, EvalTSP &_eval);

protected:
    Neighbor &neighbor;
};
