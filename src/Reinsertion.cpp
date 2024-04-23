#include "Reinsertion.h"

void Reinsertion::changeByIndex(Solution s, int index) {
    int i, j;

    if (index <= s.size() - 2) {
        i = 0;
        j = index + 1;
    } else {
        i = (index - 1) / (s.size() - 2);
        j = (index - 1) % (s.size() - 2);
    }

    if (j >= i - 1) j += 2;

    return s.reinsertion(i, j);
}
