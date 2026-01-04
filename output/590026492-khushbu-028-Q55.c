#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    // Loop from 2 to n
    for(i = 2; i <= n; i++) {
        count = 0;  // reset for each number

        // check how many factors i has
        for(j = 1; j <= i; j++) {
            if(i % j == 0) {
                count++;
            }
        }

        // prime numbers have exactly 2 factors: 1 and itself
        if(count == 2) {
            printf("%d ", i);
        }
    }

    return 0;
}
