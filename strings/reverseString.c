// wap to reverse character at given two indices 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char s[20]="abcdxyabcd";
    int n1=5,n2=6;

    char c1=s[n1-1];
    s[n1-1]=s[n2-1];
    s[n2-1]=c1;
    
    int i=0;
    while(s[i]!='\0'){
        putchar(s[i++]);
    }
}