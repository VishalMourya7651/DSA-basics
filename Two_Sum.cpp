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
     int target=22;
     sort(arr,arr+sizeof(arr)/sizeof(arr[0]));
     while (s<e)
     {
        if(arr[s]+arr[e]==target){
            cout<<arr[s]<<" "<<arr[e]<<endl;
            break;
        }
        else
        if(arr[s]+arr[e]<target){
       s++;
     }
     else
     e--;
     }
     
return 0;
}