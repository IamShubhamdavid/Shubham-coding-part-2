#include<iostream>
using namespace std;
int main(){
    int n;
    for(int i=8;i<=15;i++){
        for(int j=8;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}