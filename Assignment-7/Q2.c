// Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int i,n,x,y=0,z=1;
    printf("Enter n number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      printf("%d ",z);
       x=y;
       y=z;
       z=x+y;
    }
    
    return 0;
}