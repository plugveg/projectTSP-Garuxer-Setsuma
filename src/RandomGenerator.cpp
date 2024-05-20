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

int RandomGenerator::getRandomNumber(int min, int max) {
    std::uniform_int_distribution<int> distribution(min, max);
    return distribution(this->g);
}
