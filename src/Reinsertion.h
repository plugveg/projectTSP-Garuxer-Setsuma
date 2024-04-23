#pragma once

#include "Neighbor.h"

class Reinsertion : public Neighbor {
public:
    void changeByIndex(Solution s, int index) override;
};
