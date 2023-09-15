#include<iostream>
#include<string>
using namespace std;

//passing object as argument
//returning object 
//pointers to object

class complexnumber{
private:
    int real;
    float imaginary;

public:
    complexnumber()
    {}
    complexnumber(int r, int i)
    {
        real=r;
        imaginary=i;
    }
    void display()
    {
        cout<<"complex number is:"<<real<<"+"<<imaginary<<"i"<<endl<<endl;
    }
    int getrealpart()
    {
        return real;
    }
    float getimaginarypart()
    {
        return imaginary;
    }
};
complexnumber addvalues(complexnumber n1,complexnumber n2)
{
    int r;
    float i;
    r=n1.getrealpart()+n2.getrealpart();
    i=n1.getimaginarypart()+n2.getimaginarypart();
    complexnumber temp(r,i);
    return temp;

}


int main()
{
    complexnumber comp1(3,6),comp2(4,2),comp3;
    comp1.display();
    comp2.display();
    cout<<"addition of 2 no is:"<<endl;
    comp3 = addvalues(comp1,comp2);
    comp3.display();

    cout<<"pointers pointing the object:"<<endl;
    complexnumber *ptr1;
    ptr1=&comp2;
    ptr1->display();

    ptr1=&comp3;
    ptr1->display();

    cout<<ptr1;
    return 0;

}

