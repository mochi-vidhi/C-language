#include<stdio.h>
void main(){
    int girls,boys,IT,COMP;
    float result;
    printf("enter number of girls in collage:");
    scanf("%d",&girls);
    printf("enter number of boys in collage:");
    scanf("%d",&boys);
    printf("enter number of IT students:");
    scanf("%d",&IT);
    printf("enter number of computer students:");
    scanf("%d",&COMP);
    printf("enter result of collage:");
    scanf("%f",&result);

    printf("Number of girls: %d\n", girls);
    printf("Number of boys: %d\n", boys);
    printf("Number of IT students: %d\n", IT);
    printf("Number of computer students: %d\n", COMP);
    printf("Overall result of college: %.2f\n", result);

}