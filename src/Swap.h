#pragma once

#include "Neighbor.h"

class Swap : public Neighbor {
public:
    void changeByIndex(Solution s, int index) override;
};
