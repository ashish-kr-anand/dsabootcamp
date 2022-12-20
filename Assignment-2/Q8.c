// Write a program to check whether the given number is even or odd
// using a bitwise operator
#include<stdio.h>
int main()
{
    int x;
    printf("Enter num :");
    scanf("%d",&x);
    if(x&1 == 1)
     printf("Num is odd");
    else
    printf("Num is even");
    return 0;
}
