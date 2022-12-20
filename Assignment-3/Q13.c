// . Write a program to check whether a given number is divisible 
// by 3 and divisible by 2.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter num: ");
    scanf("%d",&x);
    if((x%2==0) && (x%3==0))
     printf("divisible");
    else
     printf("not divisible");
     return 0;
}