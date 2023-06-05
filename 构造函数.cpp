#include <iostream>
using namespace std;

//构造函数
class person
{
public:
    person()
    {
        cout << "构造函数的调用！！ " << endl;
    }

    ~person()
    {
        cout << "析构函数的调用！！" << endl;
    }
};

int main()
{

    person c1;

    system("pause");
    return 0;
}
