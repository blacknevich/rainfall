#include <stdio.h>

int main (void) {
	int c =-2147483648;
	for (int i = 0; i <20;i++, c++) {
		printf ("initial %d, multiplication %d\n", c, c*4);
	}
return (0);
}
