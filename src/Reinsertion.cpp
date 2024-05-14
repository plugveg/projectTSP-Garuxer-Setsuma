#include "Reinsertion.h"

void Reinsertion::changeByIndex(Solution &_sol, int index) {
    Neighbor::changeByIndex(_sol, index);
    _sol.reinsertion(this->pair.first, this->pair.second);
}

int Reinsertion::getNbNeighbor(Solution s) {
    return (s.size() + 1) * (s.size() + 1);
}

std::pair<int, int> Reinsertion::getNeighborIndex(Solution s, int index) {
    int i, j;

    if (index <= s.size() - 2) {
        i = 0;
        j = index + 1;
    } else {
        i = (index - 1) / (s.size() - 2);
        j = (index - 1) % (s.size() - 2);
    }

    if (j >= i - 1) j += 2;

    return std::make_pair(i, j);
}
