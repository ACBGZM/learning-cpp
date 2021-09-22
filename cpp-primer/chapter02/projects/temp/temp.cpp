#include<iostream>
int main() {
	double celsius, fahr;
	printf("fahr:");
	scanf("%lf", &fahr);
	celsius = 5 * (fahr - 32) / 9;
	printf("celsius=%5.2lf", celsius);
	return 0;
}