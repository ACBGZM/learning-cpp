// ���캯��private������ģʽ
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

// ����ģʽ
class B
{
private:
    B() :data(10) { cout << "B()" << endl; }    // ���캯��˽�л�
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

