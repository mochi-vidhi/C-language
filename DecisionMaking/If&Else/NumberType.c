#include<stdio.h>
void main(){
    int n;
    printf("enter one number:");
    scanf("%d",&n);
    if(n==0&&n>0){
       if(n%2==0){
        printf("even number:");
       }
       else{
        printf("whole number:");
       }
    }
       else{
        if(n!=0){
            printf("naturals numbers");
        }
       }
}
