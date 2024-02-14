#include <stdio.h>
int main() {
    int size = 10;
    int array[] = {2, 3, 2, 5, 6, 7, 5, 8, 9, 1};
    int frequency[size];
    
    // Initialize frequency array to 0
    for (int i = 0; i < size; i++) {
        frequency[i] = 0;
    }

    // Calculate frequency of each element
    for (int i = 0; i < size; i++) {
        frequency[array[i]]++;
    }

    // Print frequency of each element
    printf("Frequency of each element:\n");
    for (int i = 0; i < size; i++) {
        if (frequency[i] != 0) {
            printf("%d occurs %d times\n", i, frequency[i]);
        }
    }

    return 0;
}
