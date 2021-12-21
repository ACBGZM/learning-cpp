#include<iostream>
int main4()
{

	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

	int(*p)[4];   // 数组指针，指向int[4]数组
	p = a;
	std::cout << p << ' ' << *p << ' ' << **p << std::endl;

	p++;
	std::cout << p << ' ' << *p << ' ' << **p << std::endl;


	std::cout << std::endl;


	int* p2[3];	// 指针数组
	for (auto i = 0;i < 3;i++) p2[i] = a[i];	// 每个指针指向一个int[4]数组

	std::cout << p2 << ' ' << *p2 << ' ' << **p2 << std::endl;


	std::cout << p2[0] << ' ' << *p2[0] << std::endl;
	std::cout << p2[1] << ' ' << *p2[1] << std::endl;
	std::cout << p2[2] << ' ' << *p2[2] << std::endl;




	return 0;
}