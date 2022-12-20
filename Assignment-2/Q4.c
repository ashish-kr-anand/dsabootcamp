// Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapping of %d and %d is %d and %d",b,a,a,b);
    return 0;
}