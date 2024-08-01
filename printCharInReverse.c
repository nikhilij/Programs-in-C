/*
Write a C program to print the following characters in reverse.
Test Characters: 'X', 'M', 'L'
Expected Output:
The reverse of XML is LMX

*/

#include<stdio.h>

int main(){
    char a[]={'X', 'M', 'L'};
    for(int i=2;i>=0;i--){
        printf("%c",a[i]);
    }
}