#include<iostream>
#include<string>
using namespace std;

class Distance{
    private:
        int meters;
    public:
        Distance()
        
        {
            meters=0;
        }
        void diplayData()
        {
            cout<<"meters is:"<<meters<<endl;

        }
        friend void addvalue(Distance &d);
};
void addvalue(Distance &d)
{
    d.meters=d.meters+6;
}
int main()
{
    Distance d1;
    d1.displayData();

    addvalue(d1);
    d1.displayData();
    return 0;

}
