#include<stdio.h>
void main(){
int marks;
printf("Enter marks: ");
scanf("%d", &marks);
char grade = (marks >= 60) ? 'A' : 'B';
printf("Your grade is %c\n", grade);
}