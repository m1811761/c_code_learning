#include <iostream>
#include <string>
using namespace std;
void showMenu();   //展示功能菜单



int main()
{
    int select = -1; //用户选项目

    while (true)
    {
        showMenu();
        cout << "请输入您需要的功能" << endl;
        cin >> select;
        switch (select)
        {
        case 0: //退出系統
            cout << "欢迎下次使用" << endl;
            system("pause");
            return 0;
            break;
        case 1: //添加联系人
            break;
        case 2: //显示联系人
            break;
        case 3: //删除联系人
            break;
        case 4: //查找联系人
            break;
        case 5: //修改联系人
            break;
        case 6: //清空联系人
            break;
        default:
            break;
        }
    }
}

void showMenu()
{
    cout << "*****  1、添加联系人   *****" << endl;
    cout << "*****  2、显示联系人   *****" << endl;
    cout << "*****  3、删除联系人   *****" << endl;
    cout << "*****  4、查找联系人   *****" << endl;
    cout << "*****  5、修改联系人   *****" << endl;
    cout << "*****  6、清空联系人   *****" << endl;
    cout << "*****  0、退出通讯录系统   *****" << endl;
}