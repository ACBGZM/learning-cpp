// �麯���ʹ��麯��
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
	C* c = new C();		// ����C�ǳ����࣬����ʵ��������
	C* d = new D();		// ����D�ǳ����࣬����ʵ��������
	*/
	C* e = new E();
	e->foo();
	e->play();

	return 0;
}