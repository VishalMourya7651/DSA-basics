#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
     int s=0;
     int e=n-1;
     int arr[n];
     cout<<"enter the element of array: ";
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     while (s<e)
     {
       swap(arr[s],arr[e]);
       s++;
       e--;
     }
     cout<<"Reverse of array:\n";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
return 0;
}