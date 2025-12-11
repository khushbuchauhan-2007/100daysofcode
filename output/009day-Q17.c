#include <stdio.h>
#include <math.h>
int main() {    
    int a, b, c;
    float discriminant, root1, root2;
    // Input coefficients of the quadratic equation
    printf("Enter coefficients a, b and c: ");    
    scanf("%d %d %d", &a, &b, &c);
    // Calculate the discriminant
    discriminant = b*b - 4*a*c;
    // Determine the nature of the roots based on the discriminant
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and different: %.2f, %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and same: %.2f\n", root1);
    } else {
        printf("Roots are complex\n");
    }
    return 0;
}