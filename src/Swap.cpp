#include <cmath>
#include "Swap.h"

void Swap::changeByIndex(Solution s, int index) {
    float n = (1 + sqrt(1 + 8 * index)) / 2;
    int i = index - (n * (n - 1)) / 2;
    int j = s.size() - n + i;
    return s.swap(i, j);
}
