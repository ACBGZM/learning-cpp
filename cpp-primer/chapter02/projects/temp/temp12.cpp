// 函数指针
#include<iostream>

int get_max(int i, int j) { return i > j ? i : j; }
int get_min(int i, int j) { return i < j ? i : j; }

int compare(int i, int j, bool flag)
{
    // 定义函数指针，根据flag，决定指向哪个函数、并进行调用
    int (*p)(int, int);

    if (flag) p = get_max;
    else p = get_min;

    return p(i, j);
}

int main12()
{
    int i = 5, j = 10, ans;

    ans = compare(i, j, true);
    printf("the max is %d\n", ans);

    ans = compare(i, j, false);
    printf("the min is %d\n", ans);

    return 0;
}