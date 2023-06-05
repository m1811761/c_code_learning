#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        page = 200;
    }
    void footer()
    {
        cout << "帮助中心、交流中心、站内地图、（公共底部）" << endl;
    }
    void left()
    {
        cout << "C++、Java、pyyhon" << endl;
    }
    void fun()
    {
        cout << "重名函数的测试：父类" << endl;
    }
    void fun(int a)
    {
        //无法实现子类中的的继承和重载，父类的重载会被隐藏，子类通过加作用域来实现调用
        cout << "重名函数的测试：父类 重载" << endl;
    }
    static void fun1()
    {
        cout << "父类静态方法的使用" << b << endl;
    }

    int page;
    static int b;
};
int base::b = 100; //类外初始化的涵义

class java : public base //继承级别降低高权限到相应权限。
{
public:
    java()
    {
        page = 100;
    }
    void centet()
    {
        cout << "Java学科视频" << endl;
    }
    void fun()
    {
        cout << "重名函数的测试：子类" << endl;
    }
    static void fun1()
    {
        cout << "子类静态方法的使用" << b << endl;
    }

    int page;
    static int b;
};
int java::b = 200;

class C : public base
{
public:
    void content()
    {
        cout << "C++的学科视频" << endl;
    }
};
void text01()
{
    C c1;
    java j1;
    c1.footer();
    j1.centet();
}

void text02()
{
    //同名的处理方式
    java j3;
    cout << "子类page:" << j3.page << endl;
    cout << "父类类page:" << j3.base::page << endl;
}
void text03()
{
    //同名的处理方式
    java j3;
    j3.fun();
    j3.base::fun(); //添加作用域
    j3.base::fun(10);
}
void text04()
{
    java j4;
    cout << "子类的静态结果" << j4.b << endl;
    cout << "父类的静态结果" << j4.base::b << endl;
    cout << "l类名访问：子类：" << java::b << endl;
    cout << "l类名访问：父类：" << base::b << endl;
    cout << "l类名访问：子类访问父类：" << java::base::b << endl;
}
void text05()
{
    java j5;
    j5.fun1();
    java::fun1();
    j5.base::fun1();
    java::base::fun1();
}

class animal
{
public:
    int age_A;
};
class Sheep :  virtual public animal
{
};
class TUO : virtual public  animal
{
};
class SheepTuo : public Sheep, public TUO
{

};



void text06(){
    SheepTuo st;
    
    st.TUO::age_A=28;
    st.Sheep::age_A=18;
    cout<<"继承sheep的年末年龄"<<st.Sheep::age_A<<endl;
    cout<<"继承TUO的年末年龄"<<st.TUO::age_A<<endl; 

}
main()
{
    // text01();
    // text02();
    // text03();
    // text04();
    // text05();
    text06();

    system("pause");
}

//看对象模型：reportSingleClassLayoutSon + 文件名称
//继承构造函数和析构函数：父子子父

/*
静态成员的特点：所有的对象共享同一份数据编译阶段就分配内存，类内声明类外初始化
静态成员函数：只能访问静态成员变量，不能访问非静态成员变量，所有对象共享函数实例

访问方式：1、通过类对象访问
2、通过类名访问
*/
/*
多继承：   class 子类名：public 父类1，public 父类2
可能出现二义性，添加作用域来解决

钻石继承: 典型的继承
        动物           age_A
    养        驼      age_A    age_A            虚继承 virtual
        羊驼           age_A
虚继承出现后只有一份了
*/
