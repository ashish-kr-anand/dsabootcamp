<<<<<<< HEAD
// Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     printf("%d ",2*i-1);
     return 0;
}
=======
// Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter n num: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+(i*i);
    printf("Sum=%d ",sum);
    return 0;
     
}
>>>>>>> 106570c (upload)
