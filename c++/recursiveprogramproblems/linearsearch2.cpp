#include<iostream>
using namespace std;
bool linearsearch(int arr[],int x,int index,int n)
{
    if(index==n)
    return 0;
    if(arr[index]==x)
    return 1;
    return linearsearch(arr,x,index+1,n);
}
int main()
{
    int arr[]={3,6,5,15,7,5,9};
    int x=9;
    cout<<linearsearch(arr,x,0,7)<<endl;
    return 0;
}