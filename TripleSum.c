// wap to compute the sum of the two input values. If the two values are the same then triple the sum 

#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter two nums: ");
    scanf("%d %d",&n1,&n2);

    (n1==n2)?printf("%d",(n1+n2)*3):printf("%d",(n1+n2));
    
}