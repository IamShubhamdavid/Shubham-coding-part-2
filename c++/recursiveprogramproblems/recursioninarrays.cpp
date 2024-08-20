#include<iostream>
using namespace std;
void print(int arr[],int index,int n)
{
    if(index==n)
    return;
    cout<<arr[index]<<endl;
    print(arr,index+1,n);
}
int main()
{
    int arr[]={5,8,3,7,8};
    print(arr,0,5);
}