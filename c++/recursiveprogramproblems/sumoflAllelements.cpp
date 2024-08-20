#include<iostream>
using namespace std;
int sum(int arr[],int index)
{
    return arr[index];
}
int main()
{
    int arr[]={4,7,9,10,6,21};
    int total=0;
    for(int i=0;i<6;i++)
    total+=sum(arr,i);
    cout<<total;
    return 0;
}