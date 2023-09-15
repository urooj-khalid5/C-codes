#include<iostream>
#include<string>
using namespace std;

int main()
{
    int arr1[5],i,sum=0;
    cout<<"enter 5 numbers"<<endl;
    for(i=0,i<5;i++;)
    {
        cin>>arr1[i];
        cout<<arr1[i];
        sum=sum+arr1[i];
    }
    cout<<"total "<<sum;
    return 0;
    

}