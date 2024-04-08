#pragma once

#include <vector>
#include <ostream>
#include "InstanceTSP.h"


class Solution {
public:
    Solution(InstanceTSP i);
    [[nodiscard]] std::vector<int> getSolution() const;
protected:
    std::vector<int> villes;
};

std::ostream& operator<<(std::ostream &os, const Solution &sol);