#include<iostream>
#include<string>
using namespace std;

//base class
class base
{
public:
    void msg()
    {
        cout<<"it is a base class"<<endl;
    }
};

//derived class
class derived:public base
{
public:
    void msg()
    {
        cout<<"it is a derived class"<<endl;
        base::msg();
    }
};

int main()
{
    derived d;
    d.msg();

    return 0;
}
