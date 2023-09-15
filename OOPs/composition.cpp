#include<iostream>
#include<string>
using namespace std;

class birthday{
    private:
        int date;
        int month;
        int year;

    public:
        birthday(int d=0, int m=0, int y=0)//constructor...
        {
            date=d;
            month=m;
            year=y;
        }

        void set_date(int d, int m, int y)
        {
            date=d;
            month=m;
            year=y;
        }
        void printinfo()
        {
            cout<<date<<"/"<<month<<"/"<<year<<"/"<<endl;
        }
};
class people{//complex class
private:
    string name;
    birthday b1;// object of class type simple one
public:
    people(string n="", int d=0, int m=0, int y=0)
    {
        name=n;
        //by object of child class we call set daate function in people class
        b1.set_date(d,m,y);
    }
    void printinfo()
    {
        cout<<"name:"<<name<<endl;
        cout<<"birthday: "<<endl;
        b1.printinfo();
    }
};
int main()
{
    people p("My heart", 4,10,1999);
    p.printinfo();
    return 0;
}