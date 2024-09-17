#include<iostream>
using namespace std;
int add(int a,int b=4,int c=8){
    return(a+b+c);
}
int main(){
    cout<<add(2)<<endl;
    cout<<add(2,2)<<endl;
    cout<<add(2,2,3)<<endl;
    return 0;

}