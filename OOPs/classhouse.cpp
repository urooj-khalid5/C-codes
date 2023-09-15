#include<iostream>
#include<string>
using namespace std;

//class
class house{
public:
    //member variables
    int length=0 , breadth=0;

    //member functions
    void setdata(int x, int y)
    {
        length=x;
        breadth=y;
 
    }
    void area()
    {
        cout<<"area of house is :"<<length*breadth;
    }
};
 //object
 int main()
 {
     house remmy;

     //access member functions
     remmy.setdata(500,600);
     remmy.area();

     return 0;
 }