#include<iostream>

using namespace std;

int main() {
	int a = 9;

	int* pa = &a;	// 正确，定义并初始化pi指向a

	int* paa;
	//*paa = 0;	 // 错误，应该是指向变量，而不是常量
	//*paa = a;  // 错误，没有初始化的指针不能使用解引用操作
	paa = &a;	// 正确，初始化地址值
	paa = pa;	// 正确，赋地址值（没初始化也可以，相当于初始化）
	std::cout << *paa << std::endl;

	return 0;
}