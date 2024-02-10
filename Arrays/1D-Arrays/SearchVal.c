#include <stdio.h>

int main() {
    int size;
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
    int value;
    printf("\nEnter value to search:");
    scanf("%d",&value);
    
    for (int i = 0; i < size; i++) { // Start from index 0
        if (value==arr[i]) {
        printf("The value: %d at index: %d",arr[i],i);
          
        }
        
    }
   
    return 0;
}
