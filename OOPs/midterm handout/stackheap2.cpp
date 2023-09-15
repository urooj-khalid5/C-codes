#include<iostream>
#include<string>
using namespace std;

int main()
{
    double *p=new double;
    *p=35.1;

    double *q=p;
    cout<<*p<<" "<<*q<<endl;

    p=new double;
    *p=27.1;
    cout<<*p<<" "<<*q<<endl;

    *q=12.5;
    cout<<*p<<" "<<*q<<endl;

    delete p;
    delete q;
    
    return 0;
}