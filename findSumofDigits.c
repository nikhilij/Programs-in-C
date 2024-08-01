// Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number.
// Input a positive number less than 500:
// Sum of the digits of 347 is 14

#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    printf("Input a positive number less than 500: ");
    scanf("%d",&n);
    if (n < 500)
    {
        int temp = n;
        while (temp != 0)
        {
            sum = sum + temp % 10;
            temp /= 10;
        }

        printf("Sum of %d is %d", n, sum);
    }
    return 0;
}