#include <stdio.h>
int main() {
    int array[] = {5, 10, 3, 8, 15};
    int size = sizeof(array) / sizeof(array[0]);
    int largest = array[0];
    int secondLargest = array[0];

    // Loop through the array to find the largest and second largest elements
    for (int i = 1; i < size; i++) {
        if (array[i] > largest) {
            secondLargest = largest;
            largest = array[i];
        } else if (array[i] > secondLargest && array[i] != largest) {
            secondLargest = array[i];
        }
    }

    printf("Second largest element in the array: %d\n", secondLargest);
    return 0;
}
