// 静态成员变量
#include<iostream>
using namespace std;

class Student
{
public:
    Student(char* name, int age, float score);
    void show();
public:
    static int num_total;	// 静态成员变量，多个对象共享
private:
    char* m_name;
    int m_age;
    float m_score;
};

int Student::num_total = 0;	// 静态成员变量初始化

// 实现构造函数
Student::Student(char* name, int age, float score) :m_name(name), m_age(age), m_score(score)
{
    num_total += 1;
}

void Student::show()
{
    cout << m_name << "的年龄是" << m_age << "，成绩是" << m_score << "（当前共有" << num_total << "名学生）" << endl;
}

int main9()
{

    // 通过类访问静态成员变量
    Student::num_total = 1;

    // 通过对象访问静态成员变量
    Student stu((char*)"johnsmith", 19, 83);
    stu.num_total = 2;

    // 通过对象指针访问静态成员变量
    Student* pStu = new Student((char*)"lihua", 18, 84);
    pStu->num_total = 3;

    //创建匿名对象
    (new Student((char*)"小明", 15, 90))->show();     // 打印第4名
    (new Student((char*)"李磊", 16, 80))->show();     // 打印第5名
    (new Student((char*)"张华", 16, 99))->show();     // 打印第6名
    (new Student((char*)"王康", 14, 60))->show();     // 打印第7名

    return 0;
}