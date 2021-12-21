#include<iostream>

struct MyStruct
{
    char str[100];
    int size = 0;
};

int main()
{
    MyStruct mystruct1;
    MyStruct mystruct2;
    MyStruct mystruct3;

    // strcpy的第二个参数是const char*类型，适用于把常量区的数组拷贝给struct
    strcpy(mystruct1.str, "helloworld");

    char* a = (char*)"helloworld";
    strcpy(mystruct2.str, a);

    // 对于栈区的数组拷贝给struct，需要手动赋值
    char str_stack[6] = { 'h', 'e', 'l', 'l', 'o', '\0' };
    for (int i = 0;i < 6;i++)
    {
        mystruct3.str[i] = str_stack[i];
    }

    printf("%s, %d\n", mystruct1.str, mystruct1.size);
    printf("%s, %d\n", mystruct2.str, mystruct2.size);
    printf("%s, %d\n", mystruct3.str, mystruct3.size);

    return 0;
}