#include <stdio.h>
int main() {
    int side1, side2, side3;
    // Input side lengths from the user
    printf("Enter the lengths of the three sides of the triangle: ");   
    scanf("%d %d %d", &side1, &side2, &side3);
    // Classify the triangle based on side lengths using if-else
    if (side1 == side2 && side2 == side3) {
        printf("Equilateral\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }           
    return 0;
    
}