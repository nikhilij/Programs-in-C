/*
 Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
Test Data :
Input seconds: 25300
Expected Output:
There are:
H:M:S - 7:1:40
*/

#include<stdio.h>

int main(){
    int seconds;
    printf("Input seconds: ");
    scanf("%d",&seconds);
    int hours=seconds/3600;
    int remseconds=seconds%3600;
    int minutes=remseconds/60;
    int second=remseconds%60;

    printf("There are:\n");
    printf("H:M:S - %d:%d:%d\n", hours, minutes, second);

    return 0;


}