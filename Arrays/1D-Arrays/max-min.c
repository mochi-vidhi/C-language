#include <stdio.h>

int main() {
    int size, max, min;
    printf("Enter size of Array:");
    scanf("%d", &size);
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        printf("[%d]:", i);
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    max = arr[0];
    min = arr[0]; // Initialize min with the first element
    
    for (int i = 1; i < size; i++) { // Start from index 1
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) { // Check for minimum element
            min = arr[i];
        }
    }
    
    printf("\nLargest element in the array: %d\n", max);
    printf("Smallest element in the array: %d\n", min);
    
    return 0;
}
