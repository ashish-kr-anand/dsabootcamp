//  Write a program to print unit digit of a given number

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter your number: " );
    scanf("%d",&a);
    b=a%10;
    printf("The unit digit of %d is %d ",a,b);
    return 0;
}