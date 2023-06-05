#include <iostream>
#include <string>
using namespace std;

template <class Tm_name, class Tm_age>
class person2
{
public:
    person2(Tm_name name, Tm_age age)
    {
        this->m_age = age;
        this->m_Name = name;
        cout << m_Name << "  " << m_age << endl;
    }
    Tm_name m_Name;
    Tm_age m_age;
};

class person
{
public:
    string m_Name;
    int m_age;
};

void test01()
{
    person2<string, int> p1("孙悟空", 19);
}

int main()
{
    test01();
}
// 类模板无法完成数据推导
// 类模板中允许默认类型的使用
/*
1、直接指定传入的参数的类型  void fun(person<string,int> &b)
2、参数模板化
template<classT1,class T2>
void fun(peron<T1,T2>)
3、将类模板化
template<class T>
void fun(T &p)

查看数据类型 typeid

person<string,int> P1("张三"，30)

*/