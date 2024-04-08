#pragma once

#include "InstanceTSP.h"

class EvalTSP {
public:
    EvalTSP(InstanceTSP &_instanceTsp);

    static float distance(const Ville& a, const Ville& b);
    static float toRadian(float val);

protected:
    InstanceTSP &instanceTsp;
    constexpr static float pi = 3.141592;
    constexpr static float R = 6378.137;
};

