#include<iostream>
#include<string>
using namespace std;
// when statistically binding the class at compile  time
//virtual keyword is used for run time polymorphism
class flyingmachine
{
    public:
        virtual void show();
};
class helicopter:public flyingmachine
{
    public:
        virtual void show();
};  
class aeroplane:public flyingmachine
{
    public:
        virtual void show();
};
void flyingmachine::show()
{
    cout<<"flying machine"<<endl;
}
void helicopter::show()
{
    cout<<"helicopter"<<endl;
}
void aeroplane::show()
{
    cout<<"aeroplane"<<endl;
}

int main()
{
    flyingmachine*flyer;
    flyer=new helicopter;
    flyer->show();
    delete flyer;

    flyer=new aeroplane;
    flyer->show();
    delete flyer;
    return 0;
}