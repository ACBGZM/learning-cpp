// 构造函数private、单例模式
#include<iostream>
using namespace std;

class A
{
private:
    A() {}
    ~A() {}
public:
    void getInstance() { A a; }
};

// 单例模式
class B
{
private:
    B() :data(10) { cout << "B()" << endl; }    // 构造函数私有化
    ~B() { cout << "~B()" << endl; }
public:
    static B* getInstance()
    {
        static B b;
        return &b;
    }
    void Print() { cout << data << endl; }
private:
    int data;
};

int main16()
{
    // A a;

    B* rb = B::getInstance();
    rb->Print();
    return 0;
}

