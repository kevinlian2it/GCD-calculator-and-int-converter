#include <stdio.h>
#include <stdlib.h>
#include "recursive.h"

int gcd_recursive(int m, int n) {
	m = abs(m);
	n = abs(n);
	if(n == 0) {
		return m;
	}
	return gcd_recursive(n, m % n);
}
