#include<iostream>
#include<string>
using namespace std;

class abc
{
    public:
        int a;
        int b;
        float c;

        abc()
        {
            a=1;b=2;c=3.3;
        }
        abc (int a, int b, float c)
        {
            this->a=a;
            this->b=b;
            this->c=c;
        }
};