#include<iostream>
using namespace std;

struct S1
{
	int i : 8;
	char j : 4;
	int a : 4;
	double b;
};
struct S2
{
	int i : 8;
	char j : 4;
	double b;
	int a : 4;
};
struct S3
{
	int i;
	char j;
	double b;
	int a;
};

class MyClass
{
	int i;
	char j;
	double b;
	int a;
	virtual void foo()=0;
};

int main()
{
	printf("%d\n", sizeof(S1)); // 输出24
	printf("%d\n", sizeof(S1)); // 输出24
	printf("%d\n", sizeof(S3)); // 输出24

	printf("%d\n", sizeof(MyClass)); // 输出24

	char* p1 = (char*)"hello";
	char p2[] = "hello";
	
	// p1[0] = 'e'; // 错误，p1位于栈区、指向常量区，不能修改常量区的值

	p2[0] = 'e';	// 正确，p2位于栈区，拷贝了常量区的值到栈区

	printf("%s\n", p2);

	return 0;
}