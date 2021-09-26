// 2.3 复合类型 
// 2.3.1 引用
#include<iostream>
int main() {
	int ival = 1024;
	int& refVal = ival;
	//int& refVal2;  // 报错，必须初始化
	refVal = 2;
	int i2 = refVal;  // 相当于 i2 = ival

	// 对引用取值、赋值，都是对绑定的对象做操作。
	int& refVal3 = refVal;
	int i = refVal;

	//int& refVal4 = 10;  // 报错，必须引用对象
	int& refVal5 = refVal;  // 正确，但引用的是值ival。必须引用对象，引用不是对象而是别名

	std::cout << refVal << ' ' << refVal5 << std::endl;


	// 练习2.16
	int ii = 0, & rii = ii;
	double d = 0, & rd = d;
	rd = 3.14;
	rd = rii;
	ii = rd;
	rii = d;

	
	// 练习2.17
	int iii, & riii = iii;
	iii = 5;
	riii = 10;
	std::cout << iii << " " << riii << std::endl;


	return 0;
}