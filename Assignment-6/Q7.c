<<<<<<< HEAD
// Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n :");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
     printf("%d ",2*i);
     return 0;
}
=======
//Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter num : ");
    scanf("%d",&n);
    while(n!=0)
     {
       n=n/10;
       count=count+1;
     }
     printf("count=%d",count);
     return 0;
}
>>>>>>> 106570c (upload)
