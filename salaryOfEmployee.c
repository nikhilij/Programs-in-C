/*
Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00
*/

#include<stdio.h>

int main(){
    char emp_id[4]; 
    int working_hr,salary;
    printf("Input the Employees ID(Max, 10 chars): ");
    scanf("%s",emp_id);
    printf("Input the working hrs: ");
    scanf("%d",&working_hr);
    printf("salary amount/hr :");
    scanf("%d",&salary);
    float t_salary=working_hr*salary;

    printf("Employees ID: %s",emp_id);
    printf("\nSalary : US$ %.2f",t_salary);

    return 0;

}