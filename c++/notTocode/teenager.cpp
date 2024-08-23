#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<18)
    cout<<"he is teenager"<<endl;
    else if(n<50)
    cout<<"he is adult"<<endl;
    else 
    cout<<"he is old person"<<endl;
    return 0;
}
