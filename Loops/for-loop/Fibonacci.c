#include<stdio.h>
int main() {
    int n, a = 0, b = 1, i, c;
    printf("Enter one number: ");
    scanf("%d", &n);
    printf("Fibonacci series up to %d:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
