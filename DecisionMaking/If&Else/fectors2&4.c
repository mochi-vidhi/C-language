#include<stdio.h>
void main(){
    int n;
    printf("Enter any number of fectors of two or four:");
    scanf("%d",&n);
    if(n%2==0){
        if(n%4==0){
            printf("fector of 2 and 4:%d",n);
        }
        else{
            printf("fector of only 2:%d",n);
        }
    }
    else{
        printf("wrong input:");
    }
}