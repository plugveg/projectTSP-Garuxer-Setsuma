#include <cmath>
#include "TwoOpt.h"

void TwoOpt::changeByIndex(Solution s, int index) {
    float n = (1 + sqrt(1 + 8 * index)) / 2;
    int i = index - (n * (n - 1)) / 2;
    int j = s.size() - n + i;
    return s.twoOpt(i, j);
}
