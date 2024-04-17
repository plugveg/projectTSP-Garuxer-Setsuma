#include <random>
#include <algorithm>
#include "Solution.h"

Solution::Solution(InstanceTSP i) {
    villes.resize(i.getVilles().size());
    for(int i = 0; i < villes.size(); i++) {
        villes[i] = i;
    }
}

std::vector<int> Solution::getSolution() const {
    return this->villes;
}

int Solution::operator[](int i) const {
    if (i < 0) {
        return this->villes[this->villes.size() + i];
    }
    return this->villes[i];
}

int Solution::size() const {
    return this->villes.size();
}

void Solution::shuffle() {
    std::random_device rd;
    std::mt19937 g(rd());
    g.seed(time(NULL));
    std::shuffle(this->villes.begin(), this->villes.end(), g);
}

void Solution::echange(int a, int b) {
    
}

std::ostream& operator<<(std::ostream &os, const Solution &sol) {
    for (auto v : sol.getSolution()) {
        os << v << " ";
    }
    return os;
}