#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d %d %d",&a, &b, &c);
    if(a>b&&a>c){
      printf("a is maximum:%d",a);
    }
    else if(b>a&&b>c){
        printf("b is maximum:%d",b);
    }
    else{
        printf("c is maximum:%d",c);
    }
}