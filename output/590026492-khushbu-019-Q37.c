#include <stdio.h>

int main() {
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Start checking from the greater number
    lcm = (a > b) ? a : b;

    // Loop until we find a number divisible by both
    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            printf("LCM = %d", lcm);
            break;   // exit loop when LCM found
        }
        lcm++;  // keep checking next number
    }

    return 0;
}
