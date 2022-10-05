#include <stdio.h>

int main(void) {
	for (int count = 1; count < 6; count++) {
		for (int a = 0; a < 5 - count; a++) {
			printf(" ");
		}
		for (int b = 1; 2 * count - 1 >= b; b++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}