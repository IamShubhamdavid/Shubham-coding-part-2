#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=3;j++){
            printf("* ");
        }
    printf("\n");
    }
    return 0;
}