#include <stdio.h>

int main() {
    int num;
    printf("Enter a number to count down from: ");
    scanf("%d", &num);

    // Check if the number is positive
    if (num <= 0) {
        printf("Please enter a positive number.\n");
    }

    printf("Counting down from %d:\n", num);

    // Count down from num to 1 using a while loop
    while (num > 0) {
        printf("%d ", num);
        num--; // Decrement num by 1 in each iteration
    }
    printf("\n");

    return 0;
}
