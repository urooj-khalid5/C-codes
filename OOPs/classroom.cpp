#include<iostream>
#include<string>
using namespace std;

//class
class room{
private:
    int length=0 , breadth=0 , height=0;
public:
    void setdata (int x, int y, int z)
    {
        length=x;
        breadth=y;
        height=z;


    }

    void area(){
        cout<< "area of room is:"<<length*breadth<<endl;
    }
    void volume(){
        cout<<"volume is:"<<length*breadth*height;

    }

};
//object

int main(){
    room R1;

    R1.setdata(400,450,600);
    R1.area();
    R1.volume();
}
 