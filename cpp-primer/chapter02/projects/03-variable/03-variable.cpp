#include<iostream>
int temp1;
int __A;
int reused = 42;
int main() {
	int temp2;  // 函数内定义变量必须进行初始化
	std::cout << temp1 << std::endl;
	std::cout << __A << std::endl;

	std::cout << reused << std::endl;
	int reused = 0;  // 内层作用域覆盖名字
	std::cout << reused << std::endl;

	std::cout << ::reused << std::endl;  // 显示访问全局变量


	int i = 100, sum = 0;
	for (int i = 0;i != 10;++i) {
		sum += i;
		std::cout << "i=" << i << "  sum=" << sum << std::endl;
	}
	std::cout << i << sum << std::endl;

}