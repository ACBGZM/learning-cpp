// aºÍ&a
#include<iostream>

int main8()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };
	
	int* p1 = a;
	int(*p2)[10] = &a;

	std::cout << p1 << ' ' << *p1 << std::endl;
	std::cout << p2 << ' ' << *p2 << std::endl;


	std::cout << p1+1 << ' ' << *p1+1 << std::endl;
	std::cout << p2+1 << ' ' << *p2+1 << std::endl;

	std::cout << p2 << ' ' << (int*)p2 << std::endl;



	return 0;
}