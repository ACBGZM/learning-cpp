#include<iostream>

int main() {
	/*
	bool b = 42;	// b=ture
	int i = b;		// i=1
	i = 3.83;		// i=3
	double pi = i;	// pi=3.0
	
	unsigned char c1 = -1;	// 255
	signed char c2 = 256;	// undefined
	*/

	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u - u2 << std::endl;

	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i - u << std::endl;
	std::cout << u - i << std::endl;

	return 0;
}