// ���캯��protected
#include<iostream>
using namespace std;

class A
{
protected:
    A() {}
public:
    void test() { cout << "call A.test()" << endl; }
};

class B : public A
{
public:
    B() {}
};

int main15()
{
    // A a;		// ����A�������ⲿʵ����
    B b;		// ����
    b.test();	// ����

    return 0;
}