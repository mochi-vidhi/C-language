#include <stdio.h>

int main() {
    float account_balance = 1000.0;
    float transaction_amount;
    
    // User makes a deposit
    transaction_amount = 500.0;
    account_balance += transaction_amount; // Adding transaction amount to account balance

    // User makes a withdrawal
    transaction_amount = 200.0;
    account_balance -= transaction_amount; // Subtracting transaction amount from account balance

    printf("Updated account balance: %.2f\n", account_balance);
    return 0;
}
