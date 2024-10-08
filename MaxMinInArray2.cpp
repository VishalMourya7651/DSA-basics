//start
//then taking input size of array
// then taking input an array by using loop
//then take a temprary variable and put first index value in it
//then by using loop, compare with all value of array and find max
// then print the max number
//then again by using loop, compare with all value of array and find min
// then print the min number
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
      int x=a[0];
      //for max
      for(int i=1;i<n;i++){
        if(a[i]>x){
            x=a[i];
        }
      }
      cout<<"max element in array is: "<<x<<endl;
      //for min
      for(int i=1;i<n;i++){
        if(a[i]<x){
            x=a[i];
        }
      }
      cout<<"min element in array is: "<<x;
return 0;
}