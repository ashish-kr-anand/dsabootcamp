//Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void odd(int);
int main()
{
    int x;
    printf("Enter n: ");
    scanf("%d",&x);
    odd(x);
}

void odd(int x)
{
    int i;
    for(i=1;i<=x;i++)
     printf("%d ",2*i-1);
}