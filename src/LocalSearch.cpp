#include <limits>
#include "LocalSearch.h"
#include "RandomGenerator.h"

LocalSearch::LocalSearch(Neighbor &_neighbor) : Search(_neighbor) {
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

Solution LocalSearch::neighborVariable(Solution &_sol, EvalTSP &_eval, std::vector<Neighbor> neighbors) {
    Solution bestSolution = _sol;
    float bestDistance = _eval(_sol);

    for (auto neighbor : neighbors) {
        Neighbor solution = this->descentAlgorithm(_sol, neighbor);
        float distance = _eval(solution);

        if (distance < bestDistance) {
            bestSolution = solution;
            bestDistance = distance;
        }
    }

    return bestSolution;
}

Solution LocalSearch::iterated(Solution &_sol, EvalTSP &_eval) {
    int i = 0;

    while (i < 100) {
        Solution solution = this->descentAlgorithm(_sol, _eval);
        _sol = this->disturb(solution, 5);
        i++;
    }

    return _sol;
}

Solution LocalSearch::disturb(Solution &_sol, int strength) {
    for (int i = 0; i < strength; ++i) {
        int index = RandomGenerator::getInstance().getRandomNumber(0, this->neighbor.getNbNeighbor(_sol));
        this->neighbor.changeByIndex(_sol, index);
    }

    return _sol;
}
