#pragma once

#include "Neighbor.h"

class TwoOpt : public Neighbor {
public:
    void changeByIndex(Solution s, int index) override;
};
