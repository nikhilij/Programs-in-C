/*
Write a C program to compute the perimeter and area of a circle with a given radius.
Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches
*/

#include<stdio.h>

#define PI 3.14
int main(){
    float r;
    printf("Enter the radius of the circle : ");
    scanf("%f",&r);
    float perimeter=2*PI*r;
    float area=PI*r*r;
    printf("Perimeter of the Circle : %f\n",perimeter);
    printf("Area if the Circle : %f",area);

    return 0;
    
}