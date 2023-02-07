#include <stdio.h>
#include <stdlib.h>
#include "iterative.h"
#include "recursive.h"

int main(int argc, char **argv) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <integer m> <integer n>\n", argv[0]);
        return EXIT_FAILURE;
    }

    int m = atoi(argv[1]);
    int n = atoi(argv[2]);

    if (m == 0 && n == 0) {
        printf("gcd(0, 0) = undefined\n");
        return EXIT_SUCCESS;
    }

    int iterative_gcd = gcd_iterative(m, n);
    int recursive_gcd = gcd_recursive(m, n);

    printf("Iterative: gcd(%d, %d) = %d\n", m, n, iterative_gcd);
    printf("Recursive: gcd(%d, %d) = %d\n", m, n, recursive_gcd);

    return EXIT_SUCCESS;
}
