#include "InstanceTSP.h"

#include <fstream>

InstanceTSP::InstanceTSP(const std::string& filename) {
    lireInstance(filename);
}

void InstanceTSP::lireInstance(const std::string& filename) {
    std::ifstream file(filename);

    int n;
    file >> n;

    villes.resize(n);

    for (int i = 0; i < n; i++) {
        Ville v;
        file >> v.nom >> v.latitude >> v.longitude;
        villes[i] = v;
    }
}

void InstanceTSP::afficherInstance() {
    for (auto & ville : villes) {
        std::cout << ville.nom << " ";
    }
}

std::vector<Ville> InstanceTSP::getVilles() {
    return villes;
}

Ville InstanceTSP::operator[](int i) {
    return this->villes[i];
}

