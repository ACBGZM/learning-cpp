#include<iostream>
int main4()
{

	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

	int(*p)[4];   // ����ָ�룬ָ��int[4]����
	p = a;
	std::cout << p << ' ' << *p << ' ' << **p << std::endl;

	p++;
	std::cout << p << ' ' << *p << ' ' << **p << std::endl;


	std::cout << std::endl;


	int* p2[3];	// ָ������
	for (auto i = 0;i < 3;i++) p2[i] = a[i];	// ÿ��ָ��ָ��һ��int[4]����

	std::cout << p2 << ' ' << *p2 << ' ' << **p2 << std::endl;


	std::cout << p2[0] << ' ' << *p2[0] << std::endl;
	std::cout << p2[1] << ' ' << *p2[1] << std::endl;
	std::cout << p2[2] << ' ' << *p2[2] << std::endl;




	return 0;
}