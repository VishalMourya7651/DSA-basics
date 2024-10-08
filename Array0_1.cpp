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
        if(arr[s]==0){
            s++;
        }
       else 
       if(arr[e]==0){
        swap(arr[s],arr[e]);
            s++;
            e--;
        }
       
       else
       e--;
       
     }
   
     cout<<"segregate of array:\n";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
return 0;
}