// ��̬��Ա����
#include<iostream>
using namespace std;

class Student
{
public:
    Student(char* name, int age, float score);
    void show();
public:
    static int num_total;	// ��̬��Ա���������������
private:
    char* m_name;
    int m_age;
    float m_score;
};

int Student::num_total = 0;	// ��̬��Ա������ʼ��

// ʵ�ֹ��캯��
Student::Student(char* name, int age, float score) :m_name(name), m_age(age), m_score(score)
{
    num_total += 1;
}

void Student::show()
{
    cout << m_name << "��������" << m_age << "���ɼ���" << m_score << "����ǰ����" << num_total << "��ѧ����" << endl;
}

int main9()
{

    // ͨ������ʾ�̬��Ա����
    Student::num_total = 1;

    // ͨ��������ʾ�̬��Ա����
    Student stu((char*)"johnsmith", 19, 83);
    stu.num_total = 2;

    // ͨ������ָ����ʾ�̬��Ա����
    Student* pStu = new Student((char*)"lihua", 18, 84);
    pStu->num_total = 3;

    //������������
    (new Student((char*)"С��", 15, 90))->show();     // ��ӡ��4��
    (new Student((char*)"����", 16, 80))->show();     // ��ӡ��5��
    (new Student((char*)"�Ż�", 16, 99))->show();     // ��ӡ��6��
    (new Student((char*)"����", 14, 60))->show();     // ��ӡ��7��

    return 0;
}