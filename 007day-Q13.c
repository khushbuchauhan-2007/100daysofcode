#include <stdio.h>
int main() {
    int year;

    // Input a year from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year using conditional statements
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }

    return 0;
}   

