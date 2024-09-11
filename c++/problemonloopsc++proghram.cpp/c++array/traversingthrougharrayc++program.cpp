#include<iostream>
using namespace std;
int main(){
    int size,idx;
    //int array[idx]=0;
int array[]={1,2,3,4,5,7,8};
cout<<sizeof (array)<<endl;
cout<<sizeof (array)/sizeof (array[0]);
for(idx=0;idx<size;idx++){
    cout<<array[idx]<<endl;
}
for(int ele:array){
    cout<<ele<<endl;
}
return 0;
}
// ele :arrray what is the error in the in the code
// 