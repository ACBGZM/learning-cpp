#include<iostream>
int a;
int main1() {
	std::cout << a << "  address:" << &a << std::endl;
	int i, & ri = i;
	i = 4;
	ri = 010;	

	int a = 5;

	int* pa = &a;	// ��ȷ�����岢��ʼ��piָ��a

	int* paa;
	//*paa = 0;	 // ����Ӧ����ָ������������ǳ���
	//*paa = a;  // ����û�г�ʼ����ָ�벻��ʹ��
	paa = &a;	// ��ȷ
	paa = pa;	// ��ȷ
	std::cout << *paa << std::endl;

	std::cout << i << " " << ri << std::endl;

	// const ����ֵ
	const int *p1 = &a;
	std::cout << *p1 << std::endl;
	p1 = &i;
	std::cout << *p1 << std::endl;

	int* const p2 = &a;
	std::cout << *p2 << std::endl;
	// p2 = &i; ����p2�ǳ���ָ��
	std::cout << *p2 << std::endl;

	int const* p3 = &a;
	std::cout << *p3 << std::endl;
	p3 = &i;
	std::cout << *p3 << std::endl;

	return 0;
}