#include <stdio.h>

int main() {

    int n = 5;   // height of top part

    // TOP PART
    for (int i = 1; i <= n; i++) {

        // print 2*i - 1 stars using ONLY LOOPS
        for (int j = 1; j <= i; j++)
            printf("*");
        for (int j = 1; j < i; j++)
            printf("*");

        printf("\n");
    }

    // BOTTOM PART
    for (int i = n-1; i >= 1; i--) {

        // print 2*i - 1 stars using ONLY LOOPS
        for (int j = 1; j <= i; j++)
            printf("*");
        for (int j = 1; j < i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
