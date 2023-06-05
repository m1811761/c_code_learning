#include<iostream>
using namespace std;

int main(){
    //int *p = NULL;
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int * p = arr;
    cout<<"元素"<<*p<<endl;
    p++;
    cout<<"元素"<<*p<<endl;
    system("pause");
}
