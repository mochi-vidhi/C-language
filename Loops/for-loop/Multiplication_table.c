#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter any number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        for(j=1;j<=n;j++){
            printf("%dx%d=%d\t",j,i,j*i);
        }
        printf("\n");
    }
}