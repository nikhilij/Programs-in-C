// wap to find max of 3
#include<stdio.h>
int main(){
    
    int n1=10,n2=20,n3=15;
    int max=(n1>n2)?((n1>n3)?n1:n3):((n2>n3)?n2:n3);
    printf("%d",max);
}