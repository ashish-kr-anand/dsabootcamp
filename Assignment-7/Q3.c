// Write a program to check whether a given number is there in the 
// Fibonacci series or not
#include<stdio.h>
int main()
{
    int i,n,x,y=0,z=1;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=1;1;i++)
    {
       x=y;
       y=z;
       z=x+y;
       if(n==z)
       {
         printf("Num is fibonacci series");
         break;
       }
       if(z>n)
       {
        printf("Num is not fibonacci series");
        break;
       }
    }
    
    return 0;
}