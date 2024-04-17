#pragma once

#include "Solver.h"

class Random : public Solver {
public:
    void operator()(Solution &_sol) override;

};

