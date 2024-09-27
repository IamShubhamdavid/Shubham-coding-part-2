#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout << "Enter a positive integer: ";
    cin>>n;
    int sum=0;
    do{
       
        sum+=i;
        i++;
    }while(i<=n);
    cout<<"The sum of the first "<<n<< " numbers is: " << sum <<endl;
    return 0;
}