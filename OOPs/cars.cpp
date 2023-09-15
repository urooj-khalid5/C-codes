#include<iostream>
#include<string>
using namespace std;

class cars{
private:
    string company_name;
    string modelname;
    float mileage;
    double price;

public:
    cars(string company_name1="null",string modelname1="null", float mileage1=0.0f, double price1=0)
    {
        company_name=company_name1;
        modelname=modelname1;
        mileage=mileage1;
        price=price1;

    }
    cars(cars &c1)
    {
        company_name=c1.company_name;
        modelname=c1.modelname;
        mileage=c1.mileage;
        price=c1.price;
    }
    ~cars()
    {
        cout<<"destructor called"<<endl;
    }
    void getCarsData()
    {
        cout<<"Company name is:"<<company_name<<endl;
        cout<<"Model name is:"<<modelname<<endl;
        cout<<"Mileage is:"<<mileage<<endl;
        cout<<"Price is:"<<price<<endl;
    }
};
int main()
{
    cars c1("toyota", "civic",20,3500000), c2(c1);

    c1.getCarsData();
    c2.getCarsData();
    return 0;
}


