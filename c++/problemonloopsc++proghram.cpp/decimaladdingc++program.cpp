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
    int a;
    cin>>a;
    int b;
    cin>>b;
    float c;
    cin>>c;
    float d;
    cin>>d;
    cout<<add(c,d)<<endl;
    return 0;
}
