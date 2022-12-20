// Write a program to swap values of two int variables

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("swapping of %d and %d is %d and %d",b,a,a,b);
    return 0;


}
