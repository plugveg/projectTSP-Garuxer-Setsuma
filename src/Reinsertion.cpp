#include "Reinsertion.h"

void Reinsertion::changeByIndex(Solution s, int index) {
    std::pair<int, int> pair = this->getNeighborIndex(s, index);
    return s.reinsertion(pair.first, pair.second);
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
