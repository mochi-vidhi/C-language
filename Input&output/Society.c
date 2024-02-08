#include<stdio.h>
int main() {
    // declare variables
    int block, floor, home, rooms, price, bathroom, bedroom, parking; 
    float size, height;
   //get values
    printf("Enter number of blocks in your society: ");
    scanf("%d", &block);
    printf("Enter number of floors in your buildings: ");
    scanf("%d", &floor);
    printf("Enter number of homes per floor: ");
    scanf("%d", &home);
    printf("Enter number of rooms in each home: ");
    scanf("%d", &rooms);
    printf("Enter price of each home: ");
    scanf("%d", &price);
    printf("Enter number of bathrooms in each home: ");
    scanf("%d", &bathroom);
    printf("Enter number of bedrooms in each home: ");
    scanf("%d", &bedroom);
    printf("Enter number of parking spaces in the society: ");
    scanf("%d", &parking);
    printf("Enter size and height of the building: ");
    scanf("%f%f", &size, &height);

    // Print the information about the society
    printf("Society Name: Radha-Krishn Park\n");
    printf("Number of Blocks: %d\n", block);
    printf("Number of Floors: %d\n", floor);
    printf("Number of Homes per Floor: %d\n", home);
    printf("Price of Each Home: %d\n", price);
    printf("Number of Bathrooms per Home: %d\n", bathroom);
    printf("Number of Bedrooms per Home: %d\n", bedroom);
    printf("Number of Parking Spaces in the Society: %d\n", parking);
    printf("Size of the Building: %.2f\n", size);
    printf("Height of the Building: %.2f\n", height);
    return 0;
}
