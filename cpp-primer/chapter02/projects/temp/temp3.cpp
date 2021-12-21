#include<iostream>
int main3()
{
	//char a[5] = { 'a', 'b', 'c', 'd' };

	//char(*p1)[5] = &a; 
	//char(*p2)[5] = (char (*)[5])a;	

	char a[5] = { 'a','b','c','d' };
	char(*p1)[5] = &a;	// 数组指针，指向&a
	char(*p2)[5] = (char(*)[5])a;	// 数组指针，指向a

	std::cout << a << std::endl;
	printf("a=%c\n", a[0]);
	printf("p1=%c\n", **p1);
	printf("p2=%c\n", **p2);
	printf("p1+1=%c\n", **(p1 + 1));
	printf("p2+1=%c\n", **(p2 + 1));


	//std::cout << a << std::endl;	// abcd
	//std::cout << "p1 address:" << p1 << ' ' << p1 + 1 << std::endl;
	//std::cout << "p1 value:" << *p1 << ' ' << *(p1 + 1) << std::endl;
	//std::cout << "p2 address:" << p2 << ' ' << p2 + 1 << std::endl;
	//std::cout << "p2 value:" << *p2 << ' ' << *(p2 + 1) << std::endl;

	return 0;
}