//start
//then taking input size of array
// then taking input an array element by using loop
//then sort in asccending order
//then print last element as max number
//and first element as min number
//end
#include<iostream>
#include<algorithm>
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
    sort(a,a+sizeof(a)/sizeof(a[0]));
    cout<<" max element in array is: "<<a[n-1]<<endl;
    cout<<" min element in array is: "<<a[0]<<endl;
return 0;
}