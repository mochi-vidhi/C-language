#include <stdio.h>
int main() {
    int month;
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 Days.\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 Days.\n");
            break;
        case 2:
            printf("28 Days.\n");
            printf("29 Days in leap year.\n");
            break;
        default:
            printf("Invalid month number! There are only 12 months.\n");
            break;
    }

    return 0;
}
