#include <stdio.h>
int main() {
    float total_amount;
    printf("Enter total order amount: ");
    scanf("%f", &total_amount);
    if (total_amount >= 100) {
        printf("Congratulations! Your order qualifies for free shipping.\n");
    } else {
        printf("Sorry, free shipping is available for orders of $100 or more.\n");
    }
    return 0;
}
