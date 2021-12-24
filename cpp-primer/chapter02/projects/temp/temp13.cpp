// 智能指针：shared_ptr
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

    // 两个 shared_ptr 相互引用
    pb->pa_ = pa;
    pa->pb_ = pb;

    // 发现出现死锁，把任一改为weak_ptr则无死锁
    cout << pa.use_count() << endl;
    cout << pb.use_count() << endl;
}


int main()
{
    fun();
    return 0;
}