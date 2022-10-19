#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sec(int n) {
	if (n == 0 || n == 1) {
		printf("%d", n % 2);
		return n;
	}
	else
	{		
		sec(n / 2);
		printf("%d", n % 2);
	}
}

int main(void) {
	int n;
	printf("Please enter a number: ");
	scanf_s("%d", &n);
	sec(n);
	return 0;
}

