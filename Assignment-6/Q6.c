<<<<<<< HEAD
// Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     printf("%d ",2*i);
     return 0;
}
=======
//Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter num : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     fact=fact*i;
     printf("Factorial=%d",fact);
     return 0;
}
>>>>>>> 106570c (upload)
