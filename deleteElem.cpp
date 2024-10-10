#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the size of array: ";
   cin>>n;
   int arr[n];
   cout<<"Enter the element in array:\n";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   cout<<"your array is:\n";
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
    int idx;
    cout<<"Enter the position from where you want to delete the element: ";
    cin>>idx;
    for(int i=idx;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
     cout<<"After deletion of index value, array become:\n";
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
return 0;
}