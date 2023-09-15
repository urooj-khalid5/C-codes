#include<iostream>
#include<string>
using namespace std;

//base class is animal;
class animal{
public:
    void eat()
    {
        cout<<"it can eat"<<endl;
    }
    void sleep()
    {
        cout<<"it can sleep"<<endl;
    }
};

//derived class is lion
class lion:public animal
{
public:
    void run()
    {
        cout<<"it can run fast"<<endl;
    }
};
//main part
int main()
{
    //creating the object of derived class;
    lion l1;

    //now calling all the function from derived and base class through derived class object;
    l1.eat();
    l1.run();
    l1.sleep();

    return 0;
}