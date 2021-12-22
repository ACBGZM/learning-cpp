// 虚函数和纯虚函数
#include<iostream>
using namespace std;
class A
{
public:
	virtual void foo()
	{
		cout << "A::foo() is called" << endl;
	}
};
class B :public A
{
public:
	void foo()
	{
		cout << "B::foo() is called" << endl;
	}
};


class C
{
public:
	virtual void foo() = 0;
	virtual void play() = 0;
};

class D :public C
{
public:
	void foo()
	{
		cout << "C::foo() is called" << endl;
	}
};

class E :public C
{
public:
	void foo()
	{
		cout << "C::foo() is called" << endl;
	}
	void play()
	{
		cout << "E::play() is called" << endl;
	}
};

int main7()
{
	A* a = new B();
	a->foo();

	/*
	C* c = new C();		// 错误，C是抽象类，不能实例化对象
	C* d = new D();		// 错误，D是抽象类，不能实例化对象
	*/
	C* e = new E();
	e->foo();
	e->play();

	return 0;
}