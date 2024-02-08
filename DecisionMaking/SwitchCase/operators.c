#include<stdio.h>
void main(){
    int a,b;
    char op;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("enter option:");
    scanf(" %c",&op);
    switch(op){
        case '+':
               printf("addition is :%d",a+b);
               break; 
        case '-':
               printf("substraction is :%d",a-b);
               break;
        case '*':
               printf("Multiplication is :%d",a*b);
               break;
        case '/':
               printf("devision is :%d",a/b);
               break;
        default:
               printf("invalid choice:");   
    }
}