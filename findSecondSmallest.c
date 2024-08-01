// Write a C program that accepts three integers from the user and finds the second largest number among them.

#include<stdio.h>

int main(){
    int n1,n2,n3;
    printf("Enter three numbers = ");
    scanf("%d %d %d",&n1,&n2,&n3);
    int firstlargest=(n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);

    printf("%d\n",firstlargest);
    int secondlargest=(n1>n2)?((n1>n2)?n1:n2):((n1>n3)?n1:n3);
    printf("%d",secondlargest);
}