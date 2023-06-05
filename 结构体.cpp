#include<iostream>
#include<string>
using namespace std;

struct student{
    string name;
    int age;
    int score;
};

int main(){
    int *p = NULL;
    struct student s1;
    s1.name = "张三";
    cout<<"姓名:"<<s1.name<<endl;
    
    system("pause");
}
