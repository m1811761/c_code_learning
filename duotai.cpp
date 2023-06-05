#include <iostream>
using namespace std;

class animal
{
public:
    void spaeak()
    {
        cout << "动物在说话" << endl;
    }
};
class cat : public animal
{
public:
    void spaeak()
    {
        cout << "小猫在说话" << endl;
    }
};

class dog : public animal
{
public:
    virtual void spaeak()
    {
        cout << "小狗在说话" << endl;
    }
};

void dospeak(animal &ani1)
{

    ani1.spaeak();
}

int main()
{
    cat c1;
    dospeak(c1);
    dog d1;
    dospeak(d1);

    system("pause");
}

/*动态多态的：
    1、继承关系
    2、成员函数的重写(名称、参数一致)  虚函数
    3、父类引用指向子类对象

    //开闭原则：
        多态来解决的改动源码：
*/

/*
出现的错误
1、继承时对基类继承方式未添加
2、文件名称报错，具体处理方式没必要浪费时间



*/