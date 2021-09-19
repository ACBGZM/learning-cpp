#include<iostream>
using namespace std;

struct EmptyStruct {

};
struct MyStruct {
    char a;
    int b;
    int b1;
    double c;
};

int main() {
    
    cout << "sizeof(bool):" << sizeof(bool) << "byte  " << sizeof(bool) * 8 << "bit" << endl;

    cout << "sizeof(char):" << sizeof(char) << "byte  " << sizeof(char) * 8 << "bit" << endl;

    cout << "sizeof(short):" << sizeof(short) << "byte  " << sizeof(short) * 8 << "bit" << endl;
    cout << "sizeof(int):" << sizeof(int) << "byte  " << sizeof(int) * 8 << "bit" << endl;
    cout << "sizeof(long):" << sizeof(long) << "byte  " << sizeof(long) * 8 << "bit" << endl;
    cout << "sizeof(long long):" << sizeof(long long) << "byte  " << sizeof(long long) * 8 << "bit" << endl;
    cout << "sizeof(unsigned int):" << sizeof(unsigned int) << "byte  " << sizeof(unsigned int) * 8 << "bit" << endl;
    
    cout << "sizeof(float):" << sizeof(float) << "byte  " << sizeof(float) * 8 << "bit" << endl;
    cout << "sizeof(double):" << sizeof(double) << "byte  " << sizeof(double) * 8 << "bit" << endl;

    void* pointer;
    cout << "sizeof(pointer):" << sizeof(pointer) << "byte  " << sizeof(pointer) * 8 << "bit" << endl;

    EmptyStruct s1;
    MyStruct s2;
    cout << "sizeof(empty struct):" << sizeof(s1) << "byte  " << sizeof(s1) * 8 << "bit" << endl;
    cout << "sizeof(struct):" << sizeof(s2) << "byte  " << sizeof(s2) * 8 << "bit" << endl;

    return 0;
}