#include <iostream>
#include "src/InstanceTSP.h"
#include "src/Solution.h"

int main() {

    InstanceTSP instanceTsp("instances/france_10.tsp");
    instanceTsp.afficherInstance();

    Solution solution(instanceTsp);
    std::cout << solution << std::endl;
    return 0;
}
