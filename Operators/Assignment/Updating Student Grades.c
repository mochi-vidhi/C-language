#include <stdio.h>

int main() {
    int math_grade = 80;
    int science_grade = 75;

    // Adding extra credit to math grade
    int extra_credit = 5;
    math_grade += extra_credit;

    // Adjusting science grade based on performance
    int performance_adjustment = -3;
    science_grade += performance_adjustment;

    printf("Updated math grade: %d\n", math_grade);
    printf("Updated science grade: %d\n", science_grade);
    return 0;
}
