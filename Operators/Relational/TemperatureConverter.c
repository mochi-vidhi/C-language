#include <stdio.h>
int main() {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    if (celsius >= 100) {
        printf("Water boils at this temperature.\n");
    } else if (celsius <= 0) {
        printf("Water freezes at this temperature.\n");
    } else {
        printf("Water remains liquid at this temperature.\n");
    }
    return 0;
}
