#include<iostream>
 using namespace std;
 int main(){
    int num;
    cin>>num;
    if((num%3==0)||(num%5==0)){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    return 0;
     }