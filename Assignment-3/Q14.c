// Write a program to check whether a given number is divisible 
// by 7 or divisible by 3.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter num: ");
    scanf("%d",&x);
    if((x%7==0) || (x%3==0))
     printf("divisible");
    else
     printf("not divisible");
     return 0;
}