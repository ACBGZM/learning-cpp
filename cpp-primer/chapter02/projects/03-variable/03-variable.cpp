#include<iostream>
int temp1;
int __A;
int reused = 42;
int main() {
	int temp2;  // �����ڶ������������г�ʼ��
	std::cout << temp1 << std::endl;
	std::cout << __A << std::endl;

	std::cout << reused << std::endl;
	int reused = 0;  // �ڲ������򸲸�����
	std::cout << reused << std::endl;

	std::cout << ::reused << std::endl;  // ��ʾ����ȫ�ֱ���


	int i = 100, sum = 0;
	for (int i = 0;i != 10;++i) {
		sum += i;
		std::cout << "i=" << i << "  sum=" << sum << std::endl;
	}
	std::cout << i << sum << std::endl;

}