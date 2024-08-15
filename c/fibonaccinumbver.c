#include<stdio.h>
int main(){
    int n,a;
    printf("enter a number");
    scanf("%d",&n);
     a=0;
    if(n==1){
        printf("%d\n",a);
    return 0;
    }
    int b=1;
    int sum=1;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("%d ",sum);
    return 0;
}