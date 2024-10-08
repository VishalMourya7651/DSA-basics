//Start
//Creating  two 2D array
//Taking input number in both 2d array by using loop
//Now add both array and print by using loop
//Then subtract second from first array and print by using loop
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
    cout<<"Enter number in first Matrix:\n";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>a[i][j];
        }
    }
    int b[x][y];
     cout<<"Enter number in second Matrix:\n";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>b[i][j];
        }
    }

    cout<<"Addition of two martrix are:\n";
     for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<a[i][j]+b[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<"Subtraction of two martrix are:\n";
     for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<a[i][j]-b[i][j]<<" ";
        }
        cout<<endl;
    }
    
return 0;
}