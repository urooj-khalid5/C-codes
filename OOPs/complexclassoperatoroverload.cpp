#include<iostream>
#include<string>
using namespace std;

class complex
{
private:
    int real;
    int imag;
public:
        complex()
        {
            real=0;
            imag=0;
        }
        complex(int real1,int imag1)
        {
            real=real1;
            imag=imag1;
        }
        void printvalue()
        {
            cout<<real<<"+"<<imag<<"i"<<endl;

        }
        complex operator +(complex c)
        {
            complex temp;
            temp.real=real+c.real;
            temp.imag=imag+c.imag;
            return temp;
        }

};
int main(){
    int x=3;
    int y=4;
    int z=0;
    z=x+y;

    complex c1(3,4);
    complex c2(4,7);
    complex c3(2,5);
    complex c4;

    c4=c1+c2+c3;

    c4.printvalue();
    return 0;
}