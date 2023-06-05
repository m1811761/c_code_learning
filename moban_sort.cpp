#include <iostream>
using namespace std;
template <typename T>
void mySort(T arr[], int len)
{
    for (int i; i < len; i++)
        int max = i;
    for (int j = i + 1; j < len, j++)
    {
        if (arr[j] > arr[i])
        {
            max = j;
        }
    }
}

void test()
{
    char charArr[] = "asdfghjk";
}
int main()
{
    int *p = NULL;

    system("pause");
}

/*
        1、如果模板函数发生重载，是需要  template <>  void fun(int a ,int b)
        2、来实现重载
*/