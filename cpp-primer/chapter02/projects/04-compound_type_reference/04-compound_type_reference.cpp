// 2.3 �������� 
// 2.3.1 ����
#include<iostream>
int main() {
	int ival = 1024;
	int& refVal = ival;
	//int& refVal2;  // ���������ʼ��
	refVal = 2;
	int i2 = refVal;  // �൱�� i2 = ival

	// ������ȡֵ����ֵ�����Ƕ԰󶨵Ķ�����������
	int& refVal3 = refVal;
	int i = refVal;

	//int& refVal4 = 10;  // �����������ö���
	int& refVal5 = refVal;  // ��ȷ�������õ���ֵival���������ö������ò��Ƕ�����Ǳ���

	std::cout << refVal << ' ' << refVal5 << std::endl;


	// ��ϰ2.16
	int ii = 0, & rii = ii;
	double d = 0, & rd = d;
	rd = 3.14;
	rd = rii;
	ii = rd;
	rii = d;

	
	// ��ϰ2.17
	int iii, & riii = iii;
	iii = 5;
	riii = 10;
	std::cout << iii << " " << riii << std::endl;


	return 0;
}