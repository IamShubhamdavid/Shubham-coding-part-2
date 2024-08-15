#include<iostream>
using namespace std;
int minelement(int arr[],int index,int n)
{
    if(index==n-1)
    return arr[index];
    return min(arr[index],minelement(arr,index+1,n));
}
int main()
{
    int arr[]={13,40,46,8,12,14};
    cout<<minelement(arr,0,6);
    return 0;
}