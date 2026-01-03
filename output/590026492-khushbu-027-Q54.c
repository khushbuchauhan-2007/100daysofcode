#include <stdio.h>

int main() {

    int n = 4;  // height of upper part

    // TOP PART
    for (int i = 1; i <= n; i++) {

        // print spaces
        for (int s = 1; s <= (n - i); s++)
            printf(" ");

        // print i stars
        for (int j = 1; j <= i; j++)
            printf("*");

        // print i-1 more stars
        for (int j = 1; j < i; j++)
            printf("*");

        printf("\n");
    }

    // BOTTOM PART
    for (int i = n - 1; i >= 1; i--) {

        // print spaces
        for (int s = 1; s <= (n - i); s++)
            printf(" ");

        // print i stars
        for (int j = 1; j <= i; j++)
            printf("*");

        // print i-1 more stars
        for (int j = 1; j < i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
