// 移动语义
#include<iostream>
#include<vector>
#include<string>
#include<utility>

int main10()
{
	std::string str = "hello";

	std::vector<std::string> v;

	v.push_back(str);	// 调用常规拷贝构造函数，新建字符数组、拷贝数据
	std::cout << "After copy, str is: " << str << std::endl;

	v.push_back(std::move(str));	// 调用移动构造函数，掏空str
	std::cout << "After move, str is: " << str << std::endl;

	std::cout << "The contents of the vector are: " << v[0] << ' ' << v[1] << std::endl;

	return 0;
}