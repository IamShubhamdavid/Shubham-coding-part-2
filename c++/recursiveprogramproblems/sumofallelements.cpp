#include<iostream>
using namespace std;
int sum(int arr[],int index,int n)
{
    if(index==n)
    return 0;
    return arr[index]+sum(arr,index+1,n);
}
int main()
{
    int arr[]={3,4,6,2,87,67};
    cout<<sum(arr,0,6)<<endl;
    return 0;
}
