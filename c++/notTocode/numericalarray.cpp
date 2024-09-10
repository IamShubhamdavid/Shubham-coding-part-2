#include<iostream>
using namespace std;
int main(){
    int idx,size;
    int array[]={1,2,3,4,5,6};
    cout<<sizeof(array)<<endl;
    cout<<sizeof(array)/sizeof(array[0]);
    for( idx=0;idx<size;idx++)
    {
    cout<<array[idx]<<endl;
    }
    return 0;
}