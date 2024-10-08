//start
//then taking input a sentence
//then break the sentence in word by using stringstream
//then using a temparary variable
//then by using loop, take input word and revrse then print 
//repeat above line till last word in sentence
//end
#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    while (ss>>temp) {
       int n=temp.length();
       for(int i=0;i<n/2;i++){
        swap(temp[i],temp[n-i-1]);
       }
       cout<<temp<<" ";
    }
    return 0;
}
