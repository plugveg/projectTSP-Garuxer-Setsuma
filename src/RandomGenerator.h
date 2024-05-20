#pragma once

#include <random>
#include <vector>

class RandomGenerator {
public:
    static RandomGenerator& getInstance();
    void shuffle(std::vector<int>& vec);
    int getRandomNumber(int min, int max);

private:
    std::random_device rd;
    std::mt19937 g;
};
