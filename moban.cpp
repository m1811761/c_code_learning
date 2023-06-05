// 模板编程思想  传输参数的交换的逻辑

#include <iostream>
using namespace std;

template <typename T>
void myswap(T &a, T &b)
{
    T c = a;
    a = b;
    b = c;
}

void test()
{
    int a = 10, b = 20;
    cout << "a=" << a << "   b=" << b << endl;
    // 自动推导类型
    myswap(a, b);
    cout << "a=" << a << "   b=" << b << endl;
    // 显示指定类型
    myswap<int>(a, b);
    cout << "a=" << a << "   b=" << b << endl;
}

int main()
{
    test();
}

/*
模板使用： typename 可以替换为class 都可以
    1、自动推荐类型，编译器自动类型推导 ,必须要一致的类型T才能使用
    2、显示指定类型推导
    3、模板需要确定数据类型才能使用，需要具备推导条件
*/