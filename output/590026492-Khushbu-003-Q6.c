#include <stdio.h>

int main() {
    int a, b, temporary;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // swapping using third variable
    temporary = a;
    a = b;
    b = temporary;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
