// Write a program to find the Nth term of the Fibonnaci series
#include<stdio.h>
int main()
{
    int i,n,x,y=0,z=1;
    printf("Enter n number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      if(i == n)
        break;
       x=y;
       y=z;
       z=x+y;
    }
     printf("%d",z);
    
    return 0;
}