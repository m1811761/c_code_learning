#include<iostream>
using namespace std;


void swap01(int *a, int *b){
    int *t = a;
    a = b;
    b=t;
    cout<<"a=%d,b=%d"<<(*a,*b)<<endl;
}

int main(){
    int a =10;
    int b =20;
    cout<<"a=%d,b=%d"<<(a,b)<<endl;
    swap01(&a, &b);
    system("pause");
}
