/*
 Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3

*/

#include<stdio.h>

void convertDays(int days){
    int years=days/365;
    int remdays=days%365;
    int weeks=remdays/7;
    int day=remdays%7;

    printf("years: %d",years);
    printf("\nweeks: %d",weeks);
    printf("\ndays: %d",day);
}

int main(){
    int days=1329;
    convertDays(days);
}