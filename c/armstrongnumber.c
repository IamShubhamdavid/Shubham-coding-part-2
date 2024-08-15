#include<stdio.h>
 int main(){
    int num,originalnumber,remainder,result=0;
    printf("Enter a number:");
    scanf("%d",&num);
    originalnumber=num;
    while(originalnumber!=0){
        remainder=(originalnumber%10);
            result+=remainder*remainder*remainder;
            originalnumber/=10;
        }
        if(result==num)
        printf("number is armstrong%d",num);
        else
        printf("number is not armstrong%d",num);
    return 0;
 }