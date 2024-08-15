#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    for(int i=0;i<=7;i++){
        if(i%2==0){
            i=arr[i]*arr[i];
        }
        else(i%2!=0)
            i=arr[i]+10;
    }
    printf("%d",arr[0]);
    return 0;
}