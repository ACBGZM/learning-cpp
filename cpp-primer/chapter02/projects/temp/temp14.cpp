#include<iostream>
#include<string>
using namespace std;


class noncopyable
{
private:
    noncopyable(const noncopyable& non) {}
    noncopyable& operator=(const noncopyable&) {}
public:
    noncopyable() {}
    virtual ~noncopyable() {}
};


class Exception :public noncopyable
{
protected:
    char* message;
public:
    // 重载构造函数
    Exception(const char* msg)
    {
        message = new char[1024];
        strcpy(this->message, msg);
        cout << "error:" << msg << endl;
    }

    Exception(const string& msg)
    {
        message = new char[1024];
        strcpy(this->message, msg.c_str());
        cout << "error:" << msg.c_str() << endl;
    }

    void printstack()
    {
        cout << "error:" << message << endl;
    }

    ~Exception() {}
};

void  doexception(Exception e)
{

}

class Exception;

int main14()
{
    Exception excp(string("song"));

    // doexception(excp);

    return 0;
}