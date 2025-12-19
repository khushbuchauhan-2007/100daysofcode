#include <stdio.h>
int main() {
    int num1, num2, hcf, i;
    // Input two numbers from the user
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    // Find HCF
    for (i = 1; i <= (num1 < num2 ? num1 : num2); i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    // Output the result
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
    return 0;
}