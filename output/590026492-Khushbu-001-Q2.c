#include<stdio.h>
int main(){
    int a, b , sum,diff,product,quotient;
    printf("enter 2 numbers:");
    scanf("%d %d", &a,&b);
    sum = a+b;
    printf("sum is :%d ",sum);
    diff = a-b;
    printf("diff is :%d ",diff);
    product = a*b;
    printf("product is :%d ",product);
    quotient = a/b;
    printf("quotient is :%d ",quotient);
    return 0;
}