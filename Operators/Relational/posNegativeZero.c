#include<stdio.h>
void main(){
    int a;
    printf("enter one number:");
    scanf("%d",&a);
    if(a>0){
        printf("positive %d",a);
    }
    else if(a<0){
        printf("negative %d",a);
    }
    else{
        printf("zero");
    }
}