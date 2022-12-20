// Write a program to check whether a given number is an even number or an odd 
// number without using % operator.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter num: ");
    scanf("%d",&x);
    if(x&1 == 1)
      printf("num is odd");
    else
     printf("num is even");
    return 0;
}
