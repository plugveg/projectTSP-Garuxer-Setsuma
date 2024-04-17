#include "Greedy.h"


void Greedy::operator()(Solution &_sol, EvalTSP &_eval) {
    for (int i = 0; i < _sol.size() - 1; i++) {
        float min = RAND_MAX;
        int index = -1;
        for (int j = i + 1; j < _sol.size(); j++) {
            float d = _eval.distance(_eval.getInstanceTsp()[_sol[i]], _eval.getInstanceTsp()[_sol[j]]);
            if (d < min) {
                min = d;
                index = j;
            }
        }
        _sol.swap(index, i + 1);
    }
}
