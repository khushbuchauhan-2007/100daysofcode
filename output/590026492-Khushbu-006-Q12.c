#include<stdio.h>
int main(){
    int n,positive,negative,zero;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("The number %d is positive", n);
    }
    else if(n<0)
    {
        printf("The number %d is negative", n);
    }
    else
    {
        printf("The number is zero");
    }
    return 0;
}