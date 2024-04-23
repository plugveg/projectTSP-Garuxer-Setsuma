#pragma once

#include <vector>
#include <ostream>
#include "InstanceTSP.h"


class Solution {
public:
    Solution(InstanceTSP i);

    int operator[](int i) const;

    int size() const;

    [[nodiscard]] std::vector<int> getSolution() const;

    void shuffle();
    void swap(int i, int j);
    void reinsertion(int i, int j);
protected:
    std::vector<int> villes;
};

std::ostream& operator<<(std::ostream &os, const Solution &sol);

