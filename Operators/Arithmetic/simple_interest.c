#include<stdio.h>
void main(){
    int p;
    float r,n,result;
    printf("enter principal amount:");
    scanf("%d",&p);
    printf("enter rate of interest:");
    scanf("%f",&r);
    printf("enter number of year:");
    scanf("%f",&n);
    result=(p*r*n/100);
    printf("result %f",result);
}