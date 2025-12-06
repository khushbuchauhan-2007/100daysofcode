#include<stdio.h>
int main() {
int length , breadth , perimeter ,  area;
    printf("enter length of rectangle: ");
    scanf("%d",&length);
    printf("enter breadth of rectangle: ");
    scanf("%d",&breadth); 
    area = length * breadth;
    printf("area of the rectangle is : %d\n ", area);
    perimeter = 2*(length + breadth);
    printf("perimeter of the rectangle is : %d ", area);
    return 0;
}