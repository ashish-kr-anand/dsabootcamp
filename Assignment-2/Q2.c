//  Write a program to print a given number without its last digit.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter your number: " );
    scanf("%d",&a);
    b=a/10;
    printf("The %d without its last digit is %d ",a,b);
    return 0;
}
