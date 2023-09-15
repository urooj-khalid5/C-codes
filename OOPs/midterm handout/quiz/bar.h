#include<iostream>
#include<string>
using namespace std;

class bar{
    int z;
    public:
        bar (void){
            z=42;
        }
void print()
{
    cout<<z<<endl;
}
void doit()
{
    z+=1;
}
};