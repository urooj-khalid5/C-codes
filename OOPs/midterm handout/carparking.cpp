#include <iostream>
#include <string.h>
using namespace std;
class carparking{
    char colour[10];
 public:
 carparking(char*colour_in){
     strncpy(colour,colour_in,9);
     colour[9]='\0';
 }
 char*getcolour(){
     return colour;
 }
};
int main(){
    carparking*parkingarea[10];
    for(int i=0; i < 10; i++){
        parkingarea[i]=NULL;
    }
     int menu_choice=0;
     char temp_colour[10];
     int parking_number;
     while(menu_choice!=3){
         cout<<"enter 1 to put car in parking 2 to remove it,3 to quit ";
         cin>>menu_choice;
         if(menu_choice==1){
             cout<<"the foloowing spaces are empty for car parking : "<<endl;
             for(int i=0;i<10;i++){
             if(parkingarea[i]==NULL){
                 
                     cout<<(i+1)<<" , "<<endl;

                 }}}
                 cout<<"han bhai knsa parking number cahhaiye";
                 cin>>parking_number;
                 if(parkingarea[parking_number-1]==NULL){
                     cout<<"enter car colour";
                     cin>>temp_colour;
                parkingarea[parking_number-1]=new carparking(temp_colour);
                cout<<"colour of your car is"<<parkingarea[parking_number-1]->getcolour()<<endl; }
                else
                {
                    cout<<"parking area m jaga ni h niklo ";
                }  }
                if(menu_choice==2){
                    cout<<"bhae ye parking area occcupy hai";
                    for(int i=0;i<10;i++){
                        if(parkingarea[i]==NULL){
                 
                     cout<<(i+1)<<" , "<<endl;

                 }}
                 cout<<"acha chlo btao knsa parking no khali krn";
                 cin>>parking_number;
                 if(parkingarea[parking_number-1]!=NULL){
                     cout<<parkingarea[parking_number-1]->getcolour()<<"car hat gai h wha se"<<endl;
                     delete parkingarea[parking_number-1];
                     parkingarea[parking_number-1]=NULL;

                 }
                 else{
                     cout<<"parking area is unoccupied"<<endl;
                 }
                    }
                    return 0;
                }