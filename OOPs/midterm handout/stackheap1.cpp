#include<iostream>
#include<string>
using namespace std;

int main()
{
    int *p=new int;
    *p=17;
    cout<<*p<<endl;

    int *q;
    q=new int;
    *q=*p;
    *p=27;
    cout<<*p <<"  "<< *q<<endl;

    int *temp=q;
    q=p;
    p=temp;
    cout<<*p<<" "<<*q<<endl;

    delete p;
    delete q;
    return 0;
}