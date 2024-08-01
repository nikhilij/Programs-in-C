/*
 Write a C program that accepts two integers from the user and calculates the sum of the two integers.
Test Data :
Input the first integer: 25
Input the second integer: 38
Expected Output:
Sum of the above two integers = 63
*/

#include<stdio.h>
int main(){
    int a1,a2;
    printf("Input the first integer: ");
    scanf("%d",&a1);
    printf("Input the second integer: ");
    scanf("%d",&a2);

    printf("Sum of the above two integers : %d",a1+a2);
    return 0;
}