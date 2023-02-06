#include <stdio.h>
#include <stdlib.h>
#include "iterative.h"

int gcd_iterative(int m, int n){
	m = abs(m);
	n = abs(n);
    	int temp;
    	while (n != 0) {
        	temp = m % n;
        	m = n;
        	n = temp;
    	}
    	return m;
}
