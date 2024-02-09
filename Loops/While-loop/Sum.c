#include<stdio.h>

int main() {
    int i = 1, n, sum = 0;
    printf("Enter n number: ");
    scanf("%d", &n);
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("Total sum from 1 to %d: %d\n", n, sum);
    return 0;
}
