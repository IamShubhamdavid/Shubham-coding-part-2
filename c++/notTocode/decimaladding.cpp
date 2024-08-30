#include<iostream>
using namespace std;
int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}
float add(float num1,float num2){
    float sum=num1+num2;
    return sum;
}
int main(){
    float a;
    cin>>a;
    float b;
    cin>>b;
    cout<<add(a,b)<<endl;
    return 0;
}
