#include <cmath>
#include "Swap.h"

void Swap::changeByIndex(Solution s, int index) {
    std::pair<int, int> pair = this->getNeighborIndex(s, index);
    return s.swap(pair.first, pair.second);
}

int Swap::getNbNeighbor(Solution s) {
    return ((s.size() - 1) * s.size()) / 2;
}

std::pair<int, int> Swap::getNeighborIndex(Solution s, int index) {
    float n = (1 + sqrt(1 + 8 * index)) / 2;
    int i = index - (n * (n - 1)) / 2;
    int j = s.size() - n + i;
    return std::make_pair(i, j);
}
