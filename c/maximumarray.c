#include<stdio.h>
int main(){
    int arr[5]={178,2,3,4,5};
    int max=-1;
    for(int i=0;i<=5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}