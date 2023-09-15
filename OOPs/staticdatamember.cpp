#include<iostream>
#include<string>
using namespace std;

class myclass{
public:
    int x;
    static int count;

    //default constructor
    myclass()
    {
        count++;
    }
};
int myclass::count=0;

int main()
{
    cout<<"initial count:"<<myclass::count<<endl;
    myclass obj1;
    cout<<"count after 1 object is:"<<myclass::count<<endl;
}