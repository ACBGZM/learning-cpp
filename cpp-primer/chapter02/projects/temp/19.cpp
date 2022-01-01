
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int* first = (int*)sbrk(1);	// 实际上申请了一页
	*(first + 1) = 123;	// 在5~8存一个int
	printf("%d", *(first + 1));	// 不会报错，因为实际上申请了一页，可以对其中的内存进行操作
	return 0;
}