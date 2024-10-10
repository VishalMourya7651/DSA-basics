#include<iostream>
#include<climits>//used for INT_MIN
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    cout<<"enter the element in array : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i])
        max=arr[i];
       
    }
        cout<<"second max value in array is: ";

     int smax=INT_MIN;//smax=second max
    for(int i=0;i<n;i++){
        if(smax<arr[i] && arr[i]!=max)
       smax=arr[i];
    }
   
    cout<<smax;
return 0;
}