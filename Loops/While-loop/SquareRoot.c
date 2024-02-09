#include <stdio.h>

int main() {
    double num, guess, previous;
    
    printf("Enter a positive number: ");
    scanf("%lf", &num);
    
    if (num < 0) {
        printf("Please enter a positive number.\n");
    }
    
    guess = num / 2.0; // Initial guess
    
    while (1) {
        previous = guess;
        guess = (previous + num / previous) / 2.0; // Newton's method for approximation
        
        if (previous - guess < 0.00001) { // Check for convergence
            break;
        }
    }
    
    printf("Square root of %.2lf is approximately %.5lf\n", num, guess);
    
    return 0;
}
