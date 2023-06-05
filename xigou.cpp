#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "ANnimal构造函数正在执行" << endl;
    }

    virtual void speak() = 0;
    // ~Animal()
    // {
    //     cout << "ANnimal析构函数正在执行" << endl;
    // }
    virtual ~Animal() = 0; // 纯虚函数

    string *M_name;
};
Animal::~Animal()
{
    cout << "ANnimal纯析构函数正在执行" << endl;
}

class cat : public Animal
{
public:
    cat(string name)
    {
        M_name = new string(name);
        cout << "cat构造函数正在执行" << endl;
    }
    void speak()
    {
        cout << "小猫在说话" << endl;
    }
    ~cat()
    {
        cout << "cat析构函数正在执行" << endl;
    }
};
void test()
{
    Animal *abd = new cat("t");
    abd->speak();
    delete abd;
}

main()
{
    test();
    // system("pause");
}

/*
    需要解决的问题：
    1、父类指针析构函数的额时候不会走子类的析构函数，导致子函数中的堆区空间无法释放
    解决：父类虚析构函数
    2、如果想用纯虚析构函数的需要在外部实现
    解决：类内声明类外初始化（静态成员）
*/