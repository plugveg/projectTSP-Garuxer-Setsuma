#include "EvalTSP.h"
#include "InstanceTSP.h"
#include <cmath>

EvalTSP::EvalTSP(InstanceTSP &_instanceTsp) :
instanceTsp(_instanceTsp) {

}

float EvalTSP::distance(const Ville &a, const Ville &b) {
    return R * acos(sin(toRadian(a.latitude)) * sin(toRadian(b.latitude)) +
        cos(toRadian(a.latitude)) * cos(toRadian(b.latitude)) *
        cos(toRadian(b.longitude - a.longitude)));
}

float EvalTSP::toRadian(float val) {
    return val * pi / 180;
}