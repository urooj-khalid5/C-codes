#include<iostream>
#include"abc.h"
using namespace std;

int main()
{
    abc obj;
    abc obj2(2,3,5.5);
    obj.a=obj.b+obj.c;
    cout<<obj.a<<obj.b<<endl;
    cout<<obj2.a<<obj2.b<<obj2.c;
    return 0;

}