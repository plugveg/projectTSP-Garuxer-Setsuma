#pragma once

#include <iostream>
#include <vector>

typedef struct v {
    float latitude;
    float longitude;
    std::string nom;
} Ville;

class InstanceTSP {
public:
    InstanceTSP(const std::string& filename);
    void lireInstance(const std::string& filename);
    void afficherInstance();

    std::vector<Ville> getVilles();
    Ville operator[](int i);

protected:
    std::vector<Ville> villes;
};