#pragma once

#include <random>
#include <vector>

class RandomGenerator {
public:
    static RandomGenerator& getInstance();
    void shuffle(std::vector<int>& vec);

private:
    std::random_device rd;
    std::mt19937 g;
};
