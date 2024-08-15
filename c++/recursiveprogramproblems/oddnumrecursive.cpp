#include<iostream>
using namespace std;
void printodd(int num)
{
    if(num==1)
    {
        cout<<num<<endl;
        return;
    }
    printodd(num-2);
    cout<<num<<endl;
}
int main()
{
    int num;
    cin>>num;
    if(num%2==0)
    num--;
    printodd(num);
}