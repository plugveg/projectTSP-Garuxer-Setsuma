#include "Random.h"

void Random::operator()(Solution &_sol, EvalTSP &_eval) {
    _sol.shuffle();
}
