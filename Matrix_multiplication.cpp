//Start
//Creating  two 2D array
//first check condition of matrix multiplication
//Taking input number in both 2d array by using loop
//Now multiply both array and print by using loop
//End

#include<iostream>
using namespace std;
int main(){
    int m,n,p,q;
    cout<<"enter the number of rows of first matrix: ";
    cin>>m;
    cout<<"enter the number of coloms of first matrix: ";
    cin>>n;
    cout<<"enter the number of rows of second matrix: ";
    cin>>p;
    cout<<"enter the number of coloms of first matrix: ";
    cin>>q;
    if(n==p){
    int a[m][n],b[p][q],c[m][q];
    cout<<"enter element in first matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
     cout<<"enter element in second matrix: "<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
     for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){// k< n or p
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
     }
      cout<<"multiplication of a and b matrix are: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else
    cout<<" matrix is not valid for multiplication."<<endl;
return 0;
}