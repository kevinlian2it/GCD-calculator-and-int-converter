#include <stdio.h>
#include <stdlib.h>

/*
 * inpired by https://www.techiedelight.com/binary-representation-number/
 */
void print_binary(unsigned int n) {
	int i;
	for(i = 31;i >= 0;i--) {
		putc(((n >> i) & 1) + '0',stdout);
		if(i % 4 == 0) {
			putc(' ',stdout);
		}
	}
	putc('\n',stdout);
}

int main(void) {
    int x;
    printf("Enter an integer : ");
    scanf("%d", &x);
    printf("\n");
    printf("signed decimal   : %d\n", x);
    printf("unsigned decimal : %u\n", (unsigned int) x);
    printf("hexadecimal      : %x\n", (unsigned int) x);
    printf("binary           : ");
    print_binary((unsigned int) x);
    putc('\n', stdout);
    return 0;
}

