#include <stdio.h>
#include <stdlib.h>
#include "iterative.h"

int gcd_iterative(int m, int n){
	int r;
    	m = abs(m);
    	n = abs(n);

    	while (n != 0) {
        	r = m % n;
        	m = n;
        	n = r;
    	}
    	return m;


}
