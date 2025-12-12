#include <stdio.h>
int main() {
    int units;
    float bill;
    // Input number of units consumed from the user
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    
    // Calculate bill based on the number of units consumed
    if (units <= 100) {
        bill = units * 2.5; // ₹2.5 per unit for first 100 units
        printf("Bill: ₹%.2f\n", bill);
    } else if (units <= 200) {
        bill = (100 * 2.5) + ((units - 100) * 4); // ₹4 per unit for next 100 units
        printf("Bill: ₹%.2f\n", bill);
    } else {
        bill = (100 * 2.5) + (100 * 4) + ((units - 200) * 6); // ₹6 per unit for units above 200
        printf("Bill: ₹%.2f\n", bill);
    }
    
    return 0;
}