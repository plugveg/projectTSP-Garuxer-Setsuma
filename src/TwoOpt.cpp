#include <cmath>
#include "TwoOpt.h"

void TwoOpt::changeByIndex(Solution &_sol, int index) {
    Neighbor::changeByIndex(_sol, index);
    _sol.twoOpt(pair.first, pair.second);
}

int TwoOpt::getNbNeighbor(Solution s) {
    return ((s.size() - 1) * s.size()) / 2;
}

std::pair<int, int> TwoOpt::getNeighborIndex(Solution s, int index) {
    float n = (1 + sqrt(1 + 8 * index)) / 2;
    int i = index - (n * (n - 1)) / 2;
    int j = s.size() - n + i;
    return std::make_pair(i, j);
}
