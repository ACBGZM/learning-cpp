#include<iostream>

int main() {
	double dval;
	double* pd = &dval;
	double* pd2 = pd;
	*pd2 = 4;
	std::cout << dval << " " << *pd << " " << *pd2 << std::endl;

	double* nulp;
	//std::cout << *nulp << std::endl; // ��ָ�룬�޷�����ֵ

	double& d = *pd;
	double* dd = &d;	// ���������൱�ڱ�����ָ�����õ�ָ�룬�൱��ָ��Դ�����ָ��
	d = 3;
	std::cout << d << " " << *dd << std::endl;

	// int* i = 1; // ���󣬲��ܸ�ָ��ֱ�Ӹ�����ֵ������ָ�����
	int* ii = 0; // ��ȷ����0ֵ����˼�Ǵ�����ָ��

	return 0;
}