#include <iostream>
#include <string>
using namespace std;
const double PI = 3.14;
class Cricle
{
private:
    /* data */
public: //访问权限
    int m_r;
    double claculateZC()
    {
        return 2 * PI * m_r;
    };
};

class Student
{
public:
    int St_ID;
    string ST_name;

    void showStudent()
    {
        cout << "姓名:" << ST_name << "\n学号：" << St_ID << endl;
    };
};

int main()
{
    // Cricle c1;
    // c1.m_r = 10;
    // cout << "圆的周长为：" << c1.claculateZC() << endl;
    Student s1;
    s1.St_ID = 123;
    s1.ST_name = "李华";
    s1.showStudent();
    system("pause");
}
