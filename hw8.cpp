#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void) {
	int arr[5];
	int i;
	double ev = 0, num = 0;
	printf("Enter 5 real numbers: ");

	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < 5; i++) {
		ev += arr[i];
	}
	ev = ev / 5;

	for (i = 0; i < 5; i++) {
		num += pow((arr[i] - ev), 2);
	}
	num = num / 5;
	num = sqrt(num);

	printf("Standard Deviation = ");
	printf("%.3f\n", num);

	return 0;
}

