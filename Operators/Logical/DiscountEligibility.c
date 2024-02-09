#include<stdio.h>
void main(){
int totalItems;
float totalAmount;
printf("Enter total number of items: ");
scanf("%d", &totalItems);
printf("Enter total amount spent: ");
scanf("%f", &totalAmount);
if (totalItems > 10 || totalAmount > 1000.0) {
    printf("You are eligible for a discount.\n");
} else {
    printf("You are not eligible for a discount.\n");
}
}
