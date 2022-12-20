<<<<<<< HEAD
// Write a program to print MySirG N times on the screen
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     printf("MySirG\n");
     return 0;
}
=======
// Write a program to calculate sum of first N natural number
#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter n num: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i;
    printf("Sum=%d ",sum);
    return 0;
     
}
>>>>>>> 106570c (upload)
