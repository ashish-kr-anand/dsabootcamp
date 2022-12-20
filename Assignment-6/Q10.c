<<<<<<< HEAD
// Write a program to print a table of N
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n :");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
     printf("%d x %d = %d \n",n,i,n*i);
     return 0;
}
=======
//Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int n,rev=0,rem;
   printf("Enter number :");
   scanf("%d",&n);
   while(n != 0)
   {
      rem=n%10;
      n=n/10;
      rev=rev*10+rem;
   }
   printf("reverse=%d",rev);
     return 0;
}
>>>>>>> 106570c (upload)
