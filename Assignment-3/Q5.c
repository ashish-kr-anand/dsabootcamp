// Write a program to check whether a given number is a three-digit number or not

#include<stdio.h>
int main()
{
    int x;
    printf("Enter num :");
    scanf("%d",&x);
    if(x>99&&x<1000)
    printf("Number is a three-digit number");
    else
    printf("Number is not a three-digit number");
    return 0;

}