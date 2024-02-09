#include <stdio.h>
int main() {
float price;
printf("Enter price: ");
scanf("%f", &price);
// use conditional operator or ternary operator
float discount = (price > 1000.0) ? 0.1 * price : 0.05 * price;
printf("Discount applied: %.2f\n", discount);
}