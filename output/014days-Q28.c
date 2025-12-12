#include <stdio.h>
int main() {
    int n;
    long long product = 1; // Use long long to handle large products
    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    // Calculate the product of even numbers from 1 to n
    for (int i = 2; i <= n; i += 2) {
        product *= i; // Multiply only even numbers
    }
    
    // Print the result
    printf("%lld\n", product);
    
    return 0;
}