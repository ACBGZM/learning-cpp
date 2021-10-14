#include<iostream>
int a;
int main() {
	std::cout << a << std::endl;
	int i, & ri = i;
	i = 4;
	ri = 010;	

	int a = 5;

	int* pa = &a;	// 正确，定义并初始化pi指向a

	int* paa;
	//*paa = 0;	 // 错误，应该是指向变量，而不是常量
	//*paa = a;  // 错误，没有初始化的指针不能使用
	paa = &a;	// 正确
	paa = pa;	// 正确
	std::cout << *paa << std::endl;

	std::cout << i << " " << ri << std::endl;
	return 0;
}