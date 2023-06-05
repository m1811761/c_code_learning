#include<iostream>
using namespace std;

int main(){
    int *p = NULL;
    int a =300;
    int b = 200;
    p = &a;
    // *p  代表的是p指向的值。
    //p 代表的是a的地址，p的值
    //cout<< "a =="  << a <<endl;
    cout<< "p =="  << *p <<endl;
    cout<< "a == " << &p<<endl;

    //常量指针,指针指向地址内的数据不可以改动。指针指向的地址可以改。
    const int *p1 = &a;
    p1 = &b;
    cout<< "b=" << *p1<<endl; 
    cout<< "b=" << &p1<<endl; 
    //指针常量,指针变成了常量，无法修改
    int * const p2 = &a;
    //p2=&b;  
    const int * const p3=&a; //无法给改变了

    system("pause");
}
