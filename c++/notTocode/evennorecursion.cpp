#include<iostream>
using namespace std;
void printeven(int num)
{
    if(num==2)
    {
        cout<<num<<endl;
        return;
    }
    printeven(num-2);
    cout<<num<<endl;
}
int main()
{
    int num;
    cin>>num;
    if(num%2==1)
    num--;
    printeven(num);
}