
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int* first = (int*)sbrk(1);	// ʵ����������һҳ
	*(first + 1) = 123;	// ��5~8��һ��int
	printf("%d", *(first + 1));	// ���ᱨ����Ϊʵ����������һҳ�����Զ����е��ڴ���в���
	return 0;
}