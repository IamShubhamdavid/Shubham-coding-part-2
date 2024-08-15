#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("multiplication table of %d:\n",n);
    for(int i=n;i<=n*10;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
    printf("%d\n",n);
    return 0;
}