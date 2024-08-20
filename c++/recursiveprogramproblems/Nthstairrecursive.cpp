#include<iostream>
using namespace std;
int Totalways(int n)
{
    if(n<=1)
    return 1;
    return Totalways(n-1)+Totalways(n-2);
}
int main()
{
    int n=5;
    cout<<Totalways(n-1)+Totalways(n-2)<<endl;
    return 0;
}