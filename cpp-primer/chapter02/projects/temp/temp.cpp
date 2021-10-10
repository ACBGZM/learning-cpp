#include<iostream>
int main() {
	int i, & ri = i;
	i = 4;
	ri = 010;	
	std::cout << i << " " << ri << std::endl;
	return 0;
}