#include <iostream>
using namespace std;

class person
{
public:
    person(int age)
    {
        M_age = new int(age);
    }

    ~person()
    {
        if (M_age != NULL)
        {
            delete M_age;
            M_age = NULL;
        }
    }

    person &operator=(person &p)
    {
        if (M_age != NULL)
        {
            delete M_age;
            M_age = NULL;
        }
        M_age = new int(*p.M_age);
        //链式编程需要返回自己作为下次person &p的初始值
        return *this; // this 指向P，*this 解引用代表P，需要调用的&P ，才能满足采用引用的方式输入
    }
    int *M_age;
};

void text01()
{
    person p1(10);

    person p2(20);
    person p3(50);
    cout << "p1的年龄=" << *p1.M_age << endl;
    cout << "p2的年龄=" << *p2.M_age << endl;
    cout << "p3的年龄=" << *p3.M_age << endl;
    p3 = p2 = p1;
    cout << "p1的年龄=" << *p1.M_age << endl;
    cout << "p2的年龄=" << *p2.M_age << endl;
    cout << "p3的年龄=" << *p3.M_age << endl;
}

int main()
{

    text01();
    system("pause");
}
