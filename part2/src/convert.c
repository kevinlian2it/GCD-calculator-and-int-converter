#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x;
    printf("Enter an integer : ");
    scanf("%d", &x);
    printf("\n");
    printf("signed decimal   : %d\n", x);
    printf("unsigned decimal : %u\n", (unsigned int) x);
    printf("hexadecimal      : %x\n", (unsigned int) x);
    printf("binary           : ");
    unsigned int mask = 1u << 31;
    int count = 0;
    for(int i = 31;i >= 0;i--) {
	    count++;
	    if(((unsigned int)x & mask) == 0)
		    putc('0',stdout);
	    else
		    putc('1',stdout);
	    if((count & 0x3) == 0)
		    putc(' ',stdout);
	    mask >>= 1;
    }
    putc('\n', stdout);
    return 0;
}

