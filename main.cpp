#include <iostream>
#include "src/InstanceTSP.h"
#include "src/Solution.h"
#include "src/EvalTSP.h"

int main() {

    InstanceTSP instanceTsp("instances/france_10.tsp");
    instanceTsp.afficherInstance();

    Solution solution(instanceTsp);
    std::cout << solution << std::endl;

    std::cout << EvalTSP::distance(instanceTsp.getVilles()[0], instanceTsp.getVilles()[1]) << std::endl;

    EvalTSP evalTsp(instanceTsp);
    std::cout << evalTsp(solution) << std::endl;
    return 0;
}
