#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a=5,b=10;
    cout<<"before swap a= "<<a <<"  b= "<<b  <<endl;
    a=a*b;//a=50(5*10)
    b=a/b;
    a=a/b;
    cout<<"after swap a =  "<<a  <<"  b="<<b<<endl;
    return 0;
}