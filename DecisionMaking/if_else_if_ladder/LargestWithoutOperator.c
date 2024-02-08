#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    // Find largest among two numbers without using logical operators
    int diff = num1 - num2;
    if (diff > 0) {
        printf("%d is larger.\n", num1);
    } else if (diff < 0) {
        printf("%d is larger.\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }
    return 0;
}
