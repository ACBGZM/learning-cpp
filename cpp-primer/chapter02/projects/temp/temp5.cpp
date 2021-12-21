#include<iostream>


char* pStr_stack()
{
	char str[100] = "helloworld";

	return str;
}

char* pStr_point()
{
	char* p1 = (char*)"helloworld";
	return p1;
}

char* pStr_point2()
{
	char* p2 = (char*)"helloworld";
	return p2;
}

int main5()
{
	char* p = pStr_stack();

	char* p1 = pStr_point();
	char* p2 = pStr_point2();

	printf("p=%s, p=%p\n", p, p);	// 函数调用完，栈区清空，p指向的栈区不再存有字符串

	printf("p1=%s, p1=%p\n", p1, p1);
	printf("p2=%s, p2=%p\n", p2, p2);

	return 0;
}