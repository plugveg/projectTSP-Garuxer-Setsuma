#include <iostream>
#include "src/InstanceTSP.h"
#include "src/Solution.h"
#include "src/EvalTSP.h"
#include "src/Random.h"
#include "src/Greedy.h"

int main() {

    InstanceTSP instanceTsp("instances/france_10.tsp");
    //instanceTsp.afficherInstance(); //Affiche les villes
    //std::cout << "Distance entre les deux 1ʳᵉˢ villes : " << EvalTSP::distance(instanceTsp.getVilles()[0], instanceTsp.getVilles()[1]) << std::endl;

    //Test Solution in order
    Solution solution(instanceTsp);
    std::cout << solution << "Solution dans l'ordre" << std::endl;
    EvalTSP evalTsp(instanceTsp);
    std::cout << "Resultat dans l'ordre : " << evalTsp(solution) << std::endl;

    //Test Swap
    solution.swap(2, 7);
    std::cout << solution << "Solution swap" << std::endl;

    //Test Shuffle
    Random random;
    random(solution, evalTsp);
    std::cout << solution << "Solution random" << std::endl;
    std::cout << "Resultat random : " <<evalTsp(solution) << std::endl;


    Greedy greedy;
    solution.shuffle();
    greedy(solution, evalTsp);
    std::cout << solution << "Solution greedy" << std::endl;
    std::cout << "Resultat greedy : " << evalTsp(solution) << std::endl;
    return 0;
}
