// Write a program to input a three-digit number and display
// the sum of the digits.

#include<stdio.h>
int main()
{
    int a,rem=0,sum=0;
    printf("Enter three digit no. : ");
    scanf("%d",&a);
    while(a!=0)
    {
     rem=a%10;
     a=a/10;
     sum=sum+rem;
    }
    printf("sum of three digit num= %d",sum);
}