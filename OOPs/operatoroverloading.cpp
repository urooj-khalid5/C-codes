#include<iostream>
#include<string>
using namespace std;

class A{
private:
    int weight;
public:
    A(int x=0){
    weight=x;
    }
    void printvalue()
    {
        cout<<"weight is:"<<weight<<endl;
    }
    A operator+(A W)
    {
        A temp;
        temp.weight=weight + W.weight; 
        return temp;
    }


};
int main()
{
    int a=50 ,b=20,c=0;
    c=a+b;

    cout<<"total is:"<<c<<endl;

    A per1(78);
    A per2(67);
    A total;

    total=per1+per2;
    total.printvalue();
    return 0;
}