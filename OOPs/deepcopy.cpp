#include<iostream>
#include<string>
using namespace std;

class number{
    int n;
public:
    number(){}
    number(int a)
    {
        n=a;
    }
    number(number &z)
    {
        n=z.n;
        cout<<"copy construct is invoked"<<endl;

    }
    void display()
    {
       cout<<" value of n:"<<n<<endl;
    }

};
int main(){
    number n1(100);
    number n2(n1);
    n1.display();
    n2.display();
    return 0;
}