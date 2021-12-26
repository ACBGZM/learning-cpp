// 构造函数protected
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
    // A a;		// 报错，A不允许外部实例化
    B b;		// 允许
    b.test();	// 允许

    return 0;
}