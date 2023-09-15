#include<iostream>
#include<string>
using namespace std;

class myclass1{
    
friend class myclass2;//myclass1 is a friend of myclass2 now;
private:
    int x;

public:
    myclass1(int a)
    {
        x=a;
    }
};
class myclass2{
public:
    void showData(myclass1 obj)
    {
        cout<<"x value is:"<<obj.x<<endl;
    }
};
int main()
{
    myclass1 obj1(5);
    myclass2 obj2;
    obj2.showData(obj1);
    return 0;

}