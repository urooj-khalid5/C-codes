#include<iostream>
#include<string>
using namespace std;

//base class is rectangle;
class rectangle{
public: 
    int length;
    int breadth;

    void area()
    {
        cout<<"area of rectangle is:"<<length*breadth<<endl;
    }
};

//derived class is cuboid

class cuboid:public rectangle{
public:
    int height;

    void volume()
    {
        cout<<"volume of cuboid is:"<<length*breadth*height<<endl;
    }
};

//main 
int main()
{
    cuboid c;
    c.length=10,c.breadth=20,c.height=5;
    c.area();
    c.volume();

    return 0;
}