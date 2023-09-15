#include<iostream>
#include<string>
using namespace std;

class oops{
    int a;
    int b;
    int *z;

    public:
        oops()
        {
            z=new int;
        }
        void input(int x,int y,int l)
        {
            a=x;
            b=y;
            *z=l;
        }

        void display()
        {
            cout<<"value of a= "<<a<<endl;
            cout<<"value of b= "<<b<<endl;
            cout<<"value of z= "<<*z<<endl;
        }
        

};
int main()
{
    oops obj1;
    obj1.input(2,4,6);
    oops obj2=obj1;
    obj2.display();
    return 0;

}