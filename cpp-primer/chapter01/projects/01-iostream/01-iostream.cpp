#include<iostream>

/*
* 注释界定符不能嵌套
*/
// 单行注释中的任何内容都会被忽略
// 包括嵌套的注释//
// 也可以嵌套注释界定符/**/


int main() {
	std::cout << "Enter tow numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "the sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;

	std::cout <</* "*/" /* "/*" */;

	return 0;
}