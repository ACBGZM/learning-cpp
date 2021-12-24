// ����ָ�룺shared_ptr
#include<iostream>
using namespace std;

class B;

class A
{
public:
    shared_ptr<B> pb_;
    ~A() { cout << "delete A" << endl; }
};

class B
{
public:
    weak_ptr<A> pa_;
    ~B() { cout << "delete B" << endl; }
};

void fun()
{
    shared_ptr<B> pb(new B());
    shared_ptr<A> pa(new A());

    // ���� shared_ptr �໥����
    pb->pa_ = pa;
    pa->pb_ = pb;

    // ���ֳ�������������һ��Ϊweak_ptr��������
    cout << pa.use_count() << endl;
    cout << pb.use_count() << endl;
}


int main()
{
    fun();
    return 0;
}