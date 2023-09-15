#include<iostream>
#include<string>
using namespace std;

//functions with different type of parameters
int add(int a, int b)//1
{
    cout<<"function 1"<<endl;
    return(a+b);
}
double add(double a, double b)//2
{
    cout<<"function 2"<<endl;
    return(a+b);
}
int add(int a, int b, float c)//3
{
    cout<<"function 3"<<endl;
    return(a+b+c);
}
int main()
{
    cout<<"addition is:"<<add(2,3)<<endl;
    cout<<"addition is:"<<add(2.5,3.5)<<endl;
    cout<<"addition is:"<<add(3,5,4.5)<<endl;

    return 0;

}
