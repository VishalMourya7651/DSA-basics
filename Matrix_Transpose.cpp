//start
//Creating 2D array
//Taking input in 2d array by using loop
//Inter change Row and Colomn and print
//End
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter number of rows: ";
    cin>>x;
     cout<<"Enter number of colomns: ";
     cin>>y;
    int a[x][y];
    cout<<"Enter number in your 2D array:\n";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Element in 2D array are:\n";
     for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    
return 0;
}