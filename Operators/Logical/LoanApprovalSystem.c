#include <stdio.h>
int main() {
    float income;
    int credit_score;
    printf("Enter annual income: ");
    scanf("%f", &income);
    printf("Enter credit score: ");
    scanf("%d", &credit_score);
    if (income >= 50000 && credit_score >= 700) {
        printf("Loan approved!\n");
    } else {
        printf("Loan not approved.\n");
    }
    return 0;
}
