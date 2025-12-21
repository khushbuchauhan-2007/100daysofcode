#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOdd = 0; 

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num > 0; num = num / 10) {
        digit = num % 10;

        if (digit % 2 != 0) {  
            product *= digit;
            hasOdd = 1;
        }
    }

    if (hasOdd)
        printf("Product of odd digits = %d", product);
    else
        printf("No odd digits present.");

    return 0;
}
