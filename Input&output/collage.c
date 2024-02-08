#include<stdio.h>

int main() {
    // Declare variables
    int college_rank, classes, faculty, course, fees;
    float result;
    // user to enter details
    printf("Enter your college rank: ");
    scanf("%d", &college_rank);
    printf("Enter number of classes in your college: ");
    scanf("%d", &classes);
    printf("Enter number of faculty members in your college: ");
    scanf("%d", &faculty);
    printf("Enter number of courses offered in your college: ");
    scanf("%d", &course);
    printf("Enter fees of your college: ");
    scanf("%d", &fees);
    printf("Enter last year's college result (in percentage): ");
    scanf("%f", &result);
    // Print the information about the college
    printf("College Name: MBIT\n");
    printf("College Rank (All over India): %d\n", college_rank);
    printf("Number of Classes: %d\n", classes);
    printf("Number of Faculty Members: %d\n", faculty);
    printf("Number of Courses Offered: %d\n", course);
    printf("College Fees: %d\n", fees);
    printf("Last Year's College Result: %f\n", result);
    return 0;
}
