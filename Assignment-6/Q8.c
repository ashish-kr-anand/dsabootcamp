<<<<<<< HEAD
// Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     printf("%d ",i*i);
     return 0;
}
=======
// Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
    int x,i,flag=0;
    printf("Enter number: ");
    scanf("%d",&x);
    for(i=2;i<x/2;i++)
    {
     if(x%i==0)
     {
      flag=1;
      break;
     }
    }
    if(flag==1)
     printf("%d is not a prime number",x);
    else
     printf("%d is a prime number",x);
      return 0;


}
>>>>>>> 106570c (upload)
