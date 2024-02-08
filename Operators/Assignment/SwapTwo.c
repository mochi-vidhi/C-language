#include<stdio.h>
void main(){
    int a=20,b=30,c;
    printf("before swaping a is a: %d b:%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("after swaping a is a: %d b:%d\n",a,b);
}