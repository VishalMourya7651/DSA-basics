//start
//taking size of hourglass
//by using loop print  *
//end
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of lines in hourglass : ";
    cin>>n;
    //upper part
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*(n-i)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //lower part
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}