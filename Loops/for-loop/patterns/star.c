#include <stdio.h>
int main() {
    int rows = 5;

    // First loop for printing rows
    for (int i = 0; i < rows; i++) {

        // Second loop for printing number of asterisks in each row
        for (int j = 0; j <= i; j++) {
            printf("* "); // Print asterisk followed by a space
        }
        printf("\n"); // Move to the next line after printing each row
    }
    return 0;
}
