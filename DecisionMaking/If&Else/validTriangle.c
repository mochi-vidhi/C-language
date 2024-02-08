#include<stdio.h>
void main(){
    int a,b,c,sum,sides;
    printf("enter three angles:");
    scanf("%d %d %d",&a,&b,&c);
    printf("enter number of sides:");
    scanf("%d",&sides);
    sum=a+b+c;
    if(sum==180&&sides==3){
        printf("this is valid triangle\n");
    }
    else{
        printf("this is not valid triangle");
    }
}