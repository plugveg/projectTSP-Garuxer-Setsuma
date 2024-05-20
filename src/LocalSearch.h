#pragma once

#include "Neighbor.h"
#include "Search.h"

class LocalSearch: public Search {
public:
    explicit LocalSearch(Neighbor &_neighbor);
    Solution descentAlgorithm(Solution &_sol, EvalTSP &_eval);
    Solution neighborVariable(Solution &_sol, EvalTSP &_eval, std::vector<Neighbor> neighbors);
    Solution iterated(Solution &_sol, EvalTSP &_eval);

private:
    Solution disturb(Solution &_sol, int strength);
};
