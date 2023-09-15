#include<iostream>
#include<string>
using namespace std;

int main()
{
    int var=6;

    int *ip;
    float *fp;
    char *ch;
    double *dp;

    ip=&var;

    cout<<"the value of variable is:"<<var<<endl;
    cout<<"address of pointer is:"<<ip<<endl;
    cout<<"pointer pointing the value is:"<<*ip<<endl;

    *ip=7;
    cout<<endl;
    cout<<"the value of variable is:"<<var<<endl;
    cout<<"address of pointer is:"<<ip<<endl;
    cout<<"pointer pointing the value is:"<<*ip<<endl;


    return 0;

    

}