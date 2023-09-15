#include<iostream>
#include<string>
using namespace std;

class rectangle{
private:
    int length;
    int breadth;

public:
    rectangle()
    {
        cout<<"its default"<<endl;
    }
    rectangle(int x, int y)
    {
        length=x;
        breadth=y;
    }
    rectangle(rectangle &obj)
    {

    }
    
    void display()
    {
        cout<<"length is"<<length << endl;
        cout<<"breadth is "<<breadth<<endl;
    }
};
int main()
{
    rectangle r1(5,6) , r3;
    r1.display();
// when the copy of object is made at the time of intializtaionn of new obj then nit is done through copy constructor

    rectangle r2=r1;
    r2.display();

// after initialization of obj it is through assignment operator
    r3=r1;
    r3.display();
    rectangle*rec1;
    rec1->display();
    return 0;


}