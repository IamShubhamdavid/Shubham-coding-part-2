#include<iostream>
using namespace std;
bool linearsearch(int arr[],int X,int index,int N)
{
    if(index==N)
    return 0;
    if(arr[index]==X)
    return 1;
    return linearsearch(arr,X,index+1,N);
}
int main()
{
    int arr[]={3,5,1,9,11,7};
    int X=11;
    cout<<linearsearch(arr,X,0,6)<<endl;
    return 0;
}