// �ƶ�����
#include<iostream>
#include<vector>
#include<string>
#include<utility>

int main10()
{
	std::string str = "hello";

	std::vector<std::string> v;

	v.push_back(str);	// ���ó��濽�����캯�����½��ַ����顢��������
	std::cout << "After copy, str is: " << str << std::endl;

	v.push_back(std::move(str));	// �����ƶ����캯�����Ϳ�str
	std::cout << "After move, str is: " << str << std::endl;

	std::cout << "The contents of the vector are: " << v[0] << ' ' << v[1] << std::endl;

	return 0;
}