#include <algorithm>
#include "RandomGenerator.h"

RandomGenerator& RandomGenerator::getInstance() {
    static RandomGenerator instance;
    return instance;
}

void RandomGenerator::shuffle(std::vector<int>& vec) {
    g.seed(rd());
    std::shuffle(vec.begin(), vec.end(), g);
}