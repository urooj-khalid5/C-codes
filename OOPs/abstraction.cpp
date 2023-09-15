#include<iostream>
#include<string>
using namespace std;

class smartphone{
public:
//use of one pure virtual function make class abstract
//means hide complex implementation from usser only needed functions will appear
    virtual void takeselfie()=0;
};
//derived class
class android:public smartphone{
    //pure virtual wants derived class to implements its own function
    void takeselfie(){
        cout<<"taking selfie in android"<<endl;
    }
};
//taking another derived class
class iphone:public smartphone{
    void takeselfie(){
        cout<<"taking selfie in iphone"<<endl;
    }
};
int main()
{
    //pointer of base class executing the derived class function implementation
    smartphone* s1=new android;
    s1->takeselfie();
    smartphone* s2=new iphone;
    s2->takeselfie();
    return 0;
}