/* Write a program to input a number from the user and also input a digit. 
Append a digit in the number and print the resulting number. 
(Example - number=234 and digit=9 then the resulting number is 2349) */

#include<stdio.h>
int main()
{
    int a,b,res;
    printf("Enter number ");
    scanf("%d",&a);
    printf("Enter digit ");
    scanf("%d",&b);
    res=a*10+b;
    printf("number=%d",res);
    return 0;
}