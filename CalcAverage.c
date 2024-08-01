// Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
// Test Data :
// Weight - Item1: 15
// No. of item1: 5
// Weight - Item2: 25
// No. of item2: 4
// Expected Output:
// Average Value = 19.444444

#include<stdio.h>

int main(){
    int it1,it2,n1,n2;
    printf("Weight-Item1: ");
    scanf("%d",&it1);
    printf("No. of item1: ");
    scanf("%d",&n1);
    printf("Weight-Item2: ");
    scanf("%d",&it2);
    printf("No. of item2: ");
    scanf("%d",&n2);

    float average=(it1*n1+it2*n2)/(float)(n1+n2);
    printf("%f",average);
    return 0;
}