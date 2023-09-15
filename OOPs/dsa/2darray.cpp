#include <iostream>
using namespace std;

void input(int **ptr, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter value at("<< i<<","<<j<<"):";
     cin>>ptr[i][j];
        }

    }
}

//function for print array;
void print(int **ptr, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"value at index("<<i<<","<<j<<"):";
            cin>>ptr[i][j];

        }
        cout<<endl;
    }
}

int main(){
    int row , col;
    cout<<"Enter no of rows"<<endl;
    cin>>row;
    cout<<"Enter no of columns"<<endl;
    cin>>col;

    // dynamic 2d array
    int ** Array;
    Array=new int*[row];
    //loop for how much col in rows
    for(int i=0;i<row,i++;){
        Array[i]=new int[col];
    }

    input(Array, row,col);
    print(Array,row,col);

    return 0;

}