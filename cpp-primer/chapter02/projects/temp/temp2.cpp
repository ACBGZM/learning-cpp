// sizeof
#include<iostream>
int main2()
{
	std::cout << sizeof(bool) << " " << sizeof(bool*) << std::endl;
	std::cout << sizeof(char) << " " << sizeof(char*) << std::endl;
	std::cout << sizeof(int) << " " << sizeof(int*) << std::endl;
	std::cout << sizeof(long) << " " << sizeof(long*) << std::endl;
	std::cout << sizeof(long long) << " " << sizeof(long long*) << std::endl;
	std::cout << sizeof(float) << " " << sizeof(float*) << std::endl;
	std::cout << sizeof(double) << " " << sizeof(double*) << std::endl;

	enum{red, white, yellow, bule, black} e1;
	std::cout << sizeof(e1) << std::endl;
	

	int x = 2147483648;
	long y = 2147483648;
	long long z = 2147483648;
	std::cout << x << ' ' << y << ' ' << z << std::endl;


	struct EmptyStruct
	{
		short a;
	}; // 1

	struct MyStruct
	{				// 1
		double a;	// 8
		int b;		// 4
		char c;		// 1
	}; // 16
	struct MyStruct2
	{				// 1
		double a;	// 8
		int b;		// 4
		int b2;		// 4
		char c;		// 1
	}; // 24
	struct MyStruct3
	{				// 1
		double a;	// 8
		int b;		// 4
		int b2;		// 4
		char c;		// 1
		char c2;	// 1
	}; // 24
	struct MyStruct4
	{				// 1
		int b;		// 4
		int b2;		// 4
		char c;		// 1
	}; // 12

	struct MyStruct5
	{				// 1
		int i;		// 4
		long long l;// 8
		int j;		// 4
		char* p;	// 8
	}; // 32£¬24
	struct MyStruct6
	{				// 1
		int i;		// 4
		int j;		// 4
		long long l;// 8
		char* p;	// 8
	}; // 24


	struct MyStruct7
	{				// 1
		char a;		// 1
		int b;		// 4
		short c;	// 2
	}; // 12

	std::cout << sizeof(EmptyStruct) << " " << sizeof(EmptyStruct*) << std::endl;
	std::cout << sizeof(MyStruct) << " " << sizeof(MyStruct*) << std::endl;
	std::cout << sizeof(MyStruct2) << " " << sizeof(MyStruct2*) << std::endl;
	std::cout << sizeof(MyStruct3) << " " << sizeof(MyStruct3*) << std::endl;
	std::cout << sizeof(MyStruct4) << " " << sizeof(MyStruct4*) << std::endl;
	std::cout << sizeof(MyStruct5) << " " << sizeof(MyStruct5*) << std::endl;
	std::cout << sizeof(MyStruct6) << " " << sizeof(MyStruct6*) << std::endl;
	std::cout << sizeof(MyStruct7) << " " << sizeof(MyStruct7*) << std::endl;

	return 0;
}