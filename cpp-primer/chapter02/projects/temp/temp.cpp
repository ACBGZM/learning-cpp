#include<iostream>
int a;
int main() {
	std::cout << a << std::endl;
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
	return 0;
}