#include <algorithm>
#include "Solution.h"
#include "RandomGenerator.h"

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
    RandomGenerator::getInstance().shuffle(this->villes);
}

void Solution::swap(int i, int j) {
    std::swap(this->villes[i], this->villes[j]);
}

void Solution::reinsertion(int i, int j) {
    int v = this->villes[i];
    this->villes.erase(this->villes.begin() + i);
    this->villes.insert(this->villes.begin() + j, v);
}

void Solution::twoOpt(int i, int j) {
    if (i > j) {
        std::swap(i, j);
    }
    std::reverse(this->villes.begin() + i, this->villes.begin() + j + 1);
}

std::ostream& operator<<(std::ostream &os, const Solution &sol) {
    for (auto v : sol.getSolution()) {
        os << v << " ";
    }
    return os;
}
