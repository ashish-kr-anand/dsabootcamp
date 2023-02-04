// Write a function to calculate the number of combinations one can make from n items 
// and r selected at a time. (TSRS)
#include<stdio.h>
int comb(int,int);
int fact(int);
int main()
{
    int n,r;
    printf("Enter value of n and r : ");
    scanf("%d%d",&n,&r);
    printf("No. of Combination= %d ", comb(n,r));
    return 0;
}

int comb(int n,int r)
{
   int com;
   com=fact(n)/(fact(r) * fact(n-r));
   return com;
}

int fact(int a)
{
    int f=1,i;
    for(i=1;i<=a;i++)
    f=f*i;
    return f;
}