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
int main()
{
	printf("%d\n", sizeof(S1)); // ���24
	printf("%d\n", sizeof(S1)); // ���24
	printf("%d\n", sizeof(S3)); // ���24
	return 0;
}