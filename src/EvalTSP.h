#pragma once

#include "InstanceTSP.h"
#include "Solution.h"

class EvalTSP {
public:
    EvalTSP(InstanceTSP &_instanceTsp);

    float operator()(Solution &sol);

    [[nodiscard]] InstanceTSP getInstanceTsp() const;

    static float distance(const Ville& a, const Ville& b);
    static float toRadian(float val);

protected:
    InstanceTSP &instanceTsp;
    constexpr static float pi = 3.141592;
    constexpr static float R = 6378.137;
};

