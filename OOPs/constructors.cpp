#include<iostream>
#include<string>
using namespace std;

class person{
private:
    string name;
    int age;
    float height;

public:
    person()
    {
        name="null";
        age=0;
        height=0.0f;
    }
    person(string name1,int age1, float height1)
    {
        name=name1;
        age=age1;
        height=height1;
    }
    person(person &p2)
    {
        name=p2.name;
        age=p2.age;
        height=p2.height;
    }
    void getData()
    {
        cout<<"Name is:"<<name<<endl;
        cout<<"Age is:"<<age<<endl;
        cout<<"Height is:"<<height<<endl;
    }
};
int main()
{
    person p1, p2("urooj",15,5.5f), p3(p2);

    p1.getData();
    p2.getData();
    p3.getData();
    return 0;
}