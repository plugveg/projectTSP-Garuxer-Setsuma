#include <iostream>
#include "src/InstanceTSP.h"
#include "src/Solution.h"
#include "src/EvalTSP.h"
#include "src/Random.h"

int main() {

    InstanceTSP instanceTsp("instances/france_10.tsp");
    //instanceTsp.afficherInstance(); //Affiche les villes

    Solution solution(instanceTsp);
    std::cout << solution << "Solution dans l'ordre" << std::endl;
    EvalTSP evalTsp1(instanceTsp);
    std::cout << "Resultat dans l'ordre : " << evalTsp1(solution) << std::endl;
    //std::cout << "Distance entre les deux 1ʳᵉˢ villes : " << EvalTSP::distance(instanceTsp.getVilles()[0], instanceTsp.getVilles()[1]) << std::endl;

    Random random;
    random(solution);
    std::cout << solution << "Solution random" << std::endl;
    EvalTSP evalTsp2(instanceTsp);
    std::cout << "Resultat random : " <<evalTsp2(solution) << std::endl;

    return 0;
}
