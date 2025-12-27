
#include<stdio.h>
int main()  {
int n,i;
float sum = 0.0;
int numerator = 2;
int denominator = 3;
printf ("Enter the number of terms (n): ");
 scanf ("%d", &n);
 for (i = 1; i<=n;i++) {
    sum += (float)numerator / denominator;
    numerator += 2;
    denominator +=4;
 }
 printf("The sum of the series up to %d terms is: %f\\n", n, sum);

 }