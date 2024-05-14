#include <limits>
#include "LocalSearch.h"

LocalSearch::LocalSearch(Neighbor &_neighbor) : neighbor(_neighbor) {
}

void LocalSearch::setNeighbor(Neighbor &_neighbor) {
    this->neighbor = _neighbor;
}

Solution LocalSearch::bestImprover(Solution &_sol, EvalTSP &_eval) {
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

Solution LocalSearch::descentAlgorithm(Solution &_sol, EvalTSP &_eval) {
    Solution solution = _sol;
    Solution bestSolution = _sol;
    float distanceSolution = _eval(_sol);
    float bestDistance = std::numeric_limits<float>::infinity();

    while (bestDistance > distanceSolution) {
        bestSolution = solution;
        bestDistance = distanceSolution;
        solution = bestImprover(solution, _eval);
        distanceSolution = _eval(solution);
    }

    return bestSolution;
}

Solution LocalSearch::firstImprover(Solution &_sol, EvalTSP &_eval) {
    Solution bestSolution = _sol;
    Solution neighborSolution = _sol;
    float bestDistance = _eval(_sol);
    int nbNeighbors = this->neighbor.getNbNeighbor(_sol);

    for (int i = 0; i < nbNeighbors; i++) {
        this->neighbor.changeByIndex(neighborSolution, i);
        float neighborDistance = _eval(neighborSolution);

        if (neighborDistance < bestDistance) {
            return bestSolution;
        }
    }

    return bestSolution;
}
