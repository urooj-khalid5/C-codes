#include<iostream>
#include<string>
using namespace std;

class employee{
private:
    string  name;
    string company;
    int age;

public:
    void setname(string n)
    {
        name=n;
    }
    string getname()
    {
        return name;
    }
     void setcompany(string c)
    {
        company=c;
    }
    string getcompany()
    {
        return company;
    }
     void setage(int a)
    {
        age=a;
    }
    int getage()
    {
        return age;
    }
    employee(string n,string c, int a)
    {
        name=n;
        company=c;
        age=a;
    }
    void getinfo()
    {
        cout<<"name="<<name<<endl;
        cout<<"company="<<company<<endl;
        cout<<"age="<<age<<endl;
    }
};

int main()
{
    employee emp1=employee("urooj", "national level",20);
    emp1.getinfo();
    emp1.setage(25);
    cout<<emp1.getname()<<" is "<<emp1.getage()<<" years old  ";
}


