#pragma once

#include "Neighbor.h"

class Search {
public:
    explicit Search(Neighbor &_neighbor);
    void setNeighbor(Neighbor &_neighbor);
    Solution bestImprover(Solution &_sol, EvalTSP &_eval);
    Solution firstImprover(Solution &_sol, EvalTSP &_eval, std::vector<int> list);

protected:
    Neighbor &neighbor;
};
