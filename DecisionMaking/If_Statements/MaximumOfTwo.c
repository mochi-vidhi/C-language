#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    // Find maximum using if statement
    if (num1 > num2) {
        printf("Maximum of %d and %d is: %d\n", num1, num2, num1);
    }
    if (num1 < num2) {
        printf("Maximum of %d and %d is: %d\n", num2, num1, num2);
    }

    return 0;
}
