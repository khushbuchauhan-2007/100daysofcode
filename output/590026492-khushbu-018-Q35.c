#include <stdio.h>
int main() {
    int number, i;
    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    printf("Factors of %d are: ", number);
    for (i = 1; i <=number; i++) {
        if (number % i == 0) {
            printf("%d ", i);
        }
        // Check

    }
    return 0;
}