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
	printf("%d\n", sizeof(S1)); // ���24
	printf("%d\n", sizeof(S1)); // ���24
	printf("%d\n", sizeof(S3)); // ���24

	printf("%d\n", sizeof(MyClass)); // ���24

	char* p1 = (char*)"hello";
	char p2[] = "hello";
	
	// p1[0] = 'e'; // ����p1λ��ջ����ָ�������������޸ĳ�������ֵ

	p2[0] = 'e';	// ��ȷ��p2λ��ջ���������˳�������ֵ��ջ��

	printf("%s\n", p2);

	return 0;
}