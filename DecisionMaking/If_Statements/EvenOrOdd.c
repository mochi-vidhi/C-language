#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    // Check if number is even or odd using if statement
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    }
    if(num % 2!=0){
        printf("%d is Odd\n", num);
    }

    return 0;
}
