//start
//then taking input size of array
// then taking input an array by using loop
//then by using loop half of size of array and swap the value in array
//then print the array
//end
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" number in element in array: ";
    cin>>n;
    int a[n];
    cout<<"enter element in array:\n";
    for (int i=0;i<n;i++){
        cin>>a[i];
    }    
    for(int i=0;i<=n/2;i++){
        int temp=a[i];
        a[i]=a[n-i-1];
        a[n-i]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
return 0;
}