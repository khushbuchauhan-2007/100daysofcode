#include <stdio.h>

int main() {
    int num, first, last, temp, digits = 0, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;     
    last = num % 10;         

    
    while (num > 0) {
        first = num % 10;    
        num = num / 10;
        digits++;
    }

   
    for (int i = 1; i < digits; i++)
        power *= 10;

    
    int middle = original % power;     
    middle = middle / 10;             

    
    int swapped = last * power + middle * 10 + first;

    printf("Number after swapping first and last digit = %d", swapped);

    return 0;
}
