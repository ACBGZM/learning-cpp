#include<iostream>

int main() {
	double dval;
	double* pd = &dval;
	double* pd2 = pd;
	*pd2 = 4;
	std::cout << dval << " " << *pd << " " << *pd2 << std::endl;

	double* nulp;
	//std::cout << *nulp << std::endl; // 空指针，无法访问值

	double& d = *pd;
	double* dd = &d;	// 由于引用相当于别名，指向引用的指针，相当于指向源对象的指针
	d = 3;
	std::cout << d << " " << *dd << std::endl;

	// int* i = 1; // 错误，不能给指针直接赋常量值，必须指向对象
	int* ii = 0; // 正确，赋0值的意思是创建空指针

	return 0;
}