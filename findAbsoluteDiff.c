// Write a C program that will take a number as input and find the absolute difference between the input number and 51. If the input number is greater than 51, it will return triple the absolute difference.

#include <stdio.h>
#include <math.h>

int main()
{
    int x, y = 51;
    printf("Enter two nums: ");
    scanf("%d", &x);
    (x > y) ? printf("%d", (abs(x - y) * 3)) : printf("%d", (abs(x - y)));
    return 0;
}