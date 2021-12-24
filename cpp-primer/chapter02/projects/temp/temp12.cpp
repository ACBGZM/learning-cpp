// ����ָ��
#include<iostream>

int get_max(int i, int j) { return i > j ? i : j; }
int get_min(int i, int j) { return i < j ? i : j; }

int compare(int i, int j, bool flag)
{
    // ���庯��ָ�룬����flag������ָ���ĸ������������е���
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