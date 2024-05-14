#include "Neighbor.h"

void Neighbor::operator()(Solution &_sol, EvalTSP &_eval) {

}

void Neighbor::changeByIndex(Solution &_sol, int index) {
    this->pair = this->getNeighborIndex(_sol, index);
}