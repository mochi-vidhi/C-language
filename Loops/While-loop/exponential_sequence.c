#include<stdio.h>
int main() {
    unsigned long long int box = 1;
    int i = 1;
    while (i <= 64) {
        printf("%llu ", box);
        box += box;
        i++;
    }
    printf("\n");
    return 0;
}
