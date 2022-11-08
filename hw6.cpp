#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int num[5];
	int odd, even, i;
	printf("Please input five integers: ");
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &num[i]);
	}

	printf("\nOdd numbers:");

	for (i = 0; i < 5; i++) {
		if (num[i] % 2 == 1) {
			odd = num[i];
			printf(" %d", odd);
		}
	}

	printf("\nEven numbers:");

	for (i = 0; i < 5; i++) {
		if (num[i] % 2 == 0) {
			even = num[i];
			printf(" %d", even);
		}
	}

	return 0;
}