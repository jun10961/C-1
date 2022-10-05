#include <stdio.h>

int main(void) {
	printf("Pleas enter kilomiters: ");
	double a;
	scanf_s("%lf", &a);
	double b = a / 1.609;
	printf("%.1f km is equal to %.1f miles.\n", a, b);
	return 0;
}