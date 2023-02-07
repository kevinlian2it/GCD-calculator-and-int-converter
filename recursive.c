#include <stdio.h>
#include <stdlib.h>
#include "recursive.h"

int gcd_recursive(int m, int n) {
    if (n == 0)
        return abs(m);

    return gcd_recursive(n, m % n);
}
