/*
Write a C program to calculate the distance between two points.
Test Data :
Input x1: 25
Input y1: 15
Input x2: 35
Input y2: 10
Expected Output:
Distance between the said points: 11.1803
*/

#include<stdio.h>
#include<math.h>
int main(){
    int x1,y1,x2,y2;
    printf("Input x1: ");
    scanf("%d",&x1);
    printf("Input y1: ");
    scanf("%d",&y1);
    printf("Input x2: ");
    scanf("%d",&x2);
    printf("Input y2: ");
    scanf("%d",&y2);

    float dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    printf("%f",dist);
}