#include <iostream>
using namespace std;

class base
{
public:
    virtual void fun() = 0;
};

class son : public base
{
public:
    void fun()
    {
        cout << "已经重写方法" << endl;
    }
};
void test()
{
    base *abc = new son;
    abc->fun();
    delete abc;
}

int main()
{
    test();

    system("pause");
}

/*
    总结：
        1、抽象类的定义需要将纯虚函数的全部的重写才能实现
        2、抽象类无法实例化对象

*/