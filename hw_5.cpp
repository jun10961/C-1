#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;
	printf("Please enter a number: ");
	scanf("%d", &num);
	for (int i = 1; i < num; ++i) {
		if (num % i == 0 && i != 1) {
			printf("It is not a prime number.\n");
			break;
		}
		else if ((num % i != 0 && num - 1 == i) || num == 2) {
			printf("It is a prime number.\n");
			break;
		}
	}
	return 0;
}
