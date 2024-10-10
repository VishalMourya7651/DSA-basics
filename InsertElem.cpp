#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the element in array:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"your array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int x,y;//x=position, y=new element
    cout<<"Enter the position and element :\n";
     cin>>x>>y;
     x-=1;
     n++;
     for(int i=n-1;i>=x;i--){
        a[i+1]=a[i];
     }
     a[x]=y;
     
     cout<<"New array is:\n";
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
return 0;
}