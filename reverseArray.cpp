//start
//then taking input size of array
// then taking input an array by using loop
//then by using loop in reverse order and print the array
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
   for(int i=n-1;i>=0;i--){
    cout<<a[i]<<" ";
   }
return 0;
}