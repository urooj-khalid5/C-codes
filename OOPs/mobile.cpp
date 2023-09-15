#include<iostream>
#include<string>
using namespace std;

//class
class mobile{
private:
    string name;
    int RAM;
    string processor;
    int battery;
public:
    mobile(string name1="null",int RAM1=0,string processor1="null", int battery1=0)
    {
        name=name1;
        RAM=RAM1;
        processor=processor1;
        battery=battery1;

    }
    mobile(mobile &mob1)
    {
        name=mob1.name;
        RAM=mob1.RAM;
        processor=mob1.processor;
        battery=mob1.battery;
    }
    void getData()
    {
        cout<<"Name is:"<<name<<endl;
        cout<<"RAM is:"<<RAM<<endl;
        cout<<"Processor is:"<<processor<<endl;
        cout<<"battery is:"<<battery<<endl;
    }
    ~mobile()
    {
        cout<<"destructor called"<<endl;
    }
};
int main()
{
    mobile mob1("redmi note 10",50,"hard",5000), mob2(mob1);

    mob1.getData();
    mob2.getData();
    return 0;


}