#include <stdio.h>
int main() {
    int n;
    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    // Print numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}