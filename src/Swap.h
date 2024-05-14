#pragma once

#include "Neighbor.h"

class Swap : public Neighbor {
public:
    void changeByIndex(Solution &_sol, int index) override;
    int getNbNeighbor(Solution s) override;
    std::pair<int, int> getNeighborIndex(Solution s, int index) override;
};
