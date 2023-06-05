#include <iostream>
#include <String>
using namespace std;

class AnimalJ
{
public:
    AnimalJ()
    {
        cout << "ANnimal构造函数正在执行" << endl;
    }
    ~AnimalJ()
    {
        cout << "ANnimal析构函数正在执行" << endl;
    }
    // virtual AnimalJ(string n, string n2) = 0;
    virtual void cry() = 0;
    string J_name;
};

class catJ : public AnimalJ
{
public:
    catJ(string n, string eyesColor)
    {
        this->eyesColor = eyesColor;
        this->J_name = n;
        cout << "这是一只小狗，名字：" << this->J_name << "眼睛的颜色：" << this->eyesColor << endl;
    }
    void cry()
    {
        cout << "喵喵喵" << endl;
    }
    string eyesColor;
};

class dogJ : public AnimalJ
{
public:
    dogJ(string n, string furColor)
    {
        this->furColor = furColor;
        this->J_name = n;
        cout << "这是一只小狗，名字：" << this->J_name << "眼睛的颜色：" << this->furColor << endl;
    }
    void cry()
    {
        cout << "汪汪汪" << endl;
    }
    string furColor;
};

class LadyJ
{
public:
    LadyJ(string n, AnimalJ animalj)
    {
        this->nameJ = n;
        this->animalj = animalj;
    }
    void myPetCry()
    {
        cout << nameJ << "女士的宠物在";
        animalj.cry();
        cout << "的叫" << endl;
    }
    string nameJ;
    AnimalJ animalj;
};

int main()
{
    AnimalJ animalJ = new catJ("欢欢", "灰色");
    LadyJ ld("李", animalJ);
    delete animalJ;
}
