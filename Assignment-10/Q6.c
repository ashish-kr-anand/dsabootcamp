// Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int factorial(int);
int main()
{
   int fact,x;
   printf("Enter num; ");
   scanf("%d",&x);
   fact=factorial(x);
   printf("%d",fact);
}

int factorial(int x)
{
    int i,y=1;
    for(i=1;i<=x;i++)
       y=y*i;
    return y;
}