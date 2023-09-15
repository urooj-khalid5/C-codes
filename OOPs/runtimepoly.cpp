#include<iostream>
#include<string>
using namespace std;

class base{
    public:
        virtual void func1()
        {
            cout<<"base::func1() is called"<<endl;
        }
        virtual void func2(int x)
        {
            cout<<"func2 is called"<<x<<endl;
        }
};

class derived : public base{
    private:
        virtual void func1()
        {
            cout<<"derived::func1() is called"<<endl;
        }

        virtual void func2(int x)
        {
            cout<<"derived class funnc is called"<<endl;
        }

};
    int main()
    {
       base* bptr=new derived();
       bptr-> func1();
       bptr-> func2(2);
       return 0;


    }


