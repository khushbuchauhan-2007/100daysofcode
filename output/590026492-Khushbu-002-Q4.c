#include<stdio.h>
int main() {
    int radius , area , circumference;
    printf("enter radius of circle: ");
    scanf("%d",&radius);
    area = 3.14 * radius * radius;
    printf("area of circle is : %d\n ", area);
    circumference = 2 * 3.14 * radius;
    printf("circumference of circle is : %d ", circumference);
    return 0;
}