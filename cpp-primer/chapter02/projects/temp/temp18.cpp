// 右值引用-移动语义

#include<iostream>
using namespace std;

class HasPtrMem
{
public:
    int* d;

    HasPtrMem() : d(new int(0))
    {
        cout << "Construct: "  << endl;
    }
    HasPtrMem(const HasPtrMem& h) : d(new int(*h.d))
    {
        cout << "Copy construct: " << endl;
    }
    ~HasPtrMem()
    {
        cout << "Deconstruct: " << endl;
    }

   
};


HasPtrMem GetTemp()
{
    return HasPtrMem();
}

int main18()
{
    HasPtrMem a = GetTemp();
}