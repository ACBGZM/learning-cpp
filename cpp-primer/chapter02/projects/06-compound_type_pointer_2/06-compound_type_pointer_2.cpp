#include<iostream>

using namespace std;

int main() {
	int a = 9;

	int* pa = &a;	// ��ȷ�����岢��ʼ��piָ��a

	int* paa;
	//*paa = 0;	 // ����Ӧ����ָ������������ǳ���
	//*paa = a;  // ����û�г�ʼ����ָ�벻��ʹ�ý����ò���
	paa = &a;	// ��ȷ����ʼ����ֵַ
	paa = pa;	// ��ȷ������ֵַ��û��ʼ��Ҳ���ԣ��൱�ڳ�ʼ����
	std::cout << *paa << std::endl;

	return 0;
}