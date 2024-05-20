#include "Search.h"

Search::Search(Neighbor &_neighbor) : neighbor(_neighbor) {
}

void Search::setNeighbor(Neighbor &_neighbor) {
    this->neighbor = _neighbor;
}

Solution Search::bestImprover(Solution &_sol, EvalTSP &_eval) {
    Solution bestSolution = _sol;
    Solution neighborSolution = _sol;
    float bestDistance = _eval(_sol);
    int nbNeighbors = this->neighbor.getNbNeighbor(_sol);

    for (int i = 0; i < nbNeighbors; i++) {
        this->neighbor.changeByIndex(neighborSolution, i);
        float neighborDistance = _eval(neighborSolution);

        if (neighborDistance < bestDistance) {
            bestSolution = neighborSolution;
            bestDistance = neighborDistance;
        }
    }

    return bestSolution;
}

Solution Search::firstImprover(Solution &_sol, EvalTSP &_eval, std::vector<int> list) {
    Solution bestSolution = _sol;
    Solution neighborSolution = _sol;
    float bestDistance = _eval(_sol);

    for (auto i : list) {
        this->neighbor.changeByIndex(neighborSolution, i);
        float neighborDistance = _eval(neighborSolution);

        if (neighborDistance < bestDistance) {
            return bestSolution;
        }
    }

    return bestSolution;
}
