#include<stdio.h>
void main(){
   int i,n;
    printf("enter n number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("even %d\n",i);
        }
        else{
            printf("odd  %d\n",i);
        }
    }
}