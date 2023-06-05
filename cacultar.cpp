#include <iostream>
using namespace std;

// 多态的写法完成计算器类
class calcultaor // 计算器抽象类
{
public:
    virtual int getResult() = 0;
    int num1;
    int num2;
};

class AddCalcultaor : public calcultaor // 计算器加法类
{
public:
    int getResult()
    {
        return num1 + num2;
    }
};
class SubCalcultaor : public calcultaor // 计算器加法类
{
public:
    int getResult()
    {
        return num1 - num2;
    }
};

class mulCalcultaor : public calcultaor // 计算器加法类
{
public:
    int getResult()
    {
        return num1 * num2;
    }
};
void text()
{
    calcultaor *abc = new AddCalcultaor;
    abc->num1 = 10;
    abc->num2 = 20;
    cout << abc->num1 << " + " << abc->num2 << " = " << abc->getResult() << endl;
    delete abc;
}

int main()
{
    text();

    system("pause");
}
