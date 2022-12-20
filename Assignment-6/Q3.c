<<<<<<< HEAD
// Write a program to print the first N natural numbers in reverse orde
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n :");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
     printf("%d ",i);
     return 0;
}
=======
// Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter n num: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+(2*i-1);
    printf("Sum=%d ",sum);
    return 0;
     
}
>>>>>>> 106570c (upload)
