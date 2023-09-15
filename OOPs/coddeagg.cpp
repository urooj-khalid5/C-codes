#include<iostream>
#include<string>
using namespace std;

class instructor{
private:
    string name;
    int phone;

public:
    instructor(string n="null", int p=0 )
    {
        name=n;
        phone=p;
    }
    void setdata(string n , int p)
    {
        name=n;
        phone=p;
    }
    void print()
    {
        cout<<"instructor name is:"<<name<<endl;
        cout<<"phone no is:"<<phone<<endl;
    }
};
class textbook
{
private:
    string title;
    int bookid;

public:
    textbook(string t="null", int b=0)
    {
        title=t;
        bookid=b;
    }
    void setbookdata(string t,int b)
    {
        title=t;
        bookid=b;
    }
    void print()
    {
        cout<<"tiltle name is:"<<title<<endl;
        cout<<"book id is:"<<bookid<<endl;
    }
};
class course{
private:
    string coursename;
    instructor ins1;
    textbook txt1;

public:
    course(string c, string n, int p, string t, int b)
    {
        coursename=c;
        ins1.setdata(n,p);
        txt1.setbookdata(t,b);
    }
    void print()
    {
        cout<<"course name is:"<<coursename<<endl;
        ins1.print();
        txt1.print();
    }
};
int main()
{
    course c1("OOP","urooj",0123,"OBJECT ORIENTED PROGRAMMING",10);
    c1.print();
    return 0;
}

