// Write a function to calculate the number of arrangements one can make from n items 
// and r selected at a time. (TSRS)
#include<stdio.h>
int perm(int,int);
int fact(int);
int main()
{
    int n,r;
    printf("Enter value of n and r : ");
    scanf("%d%d",&n,&r);
    printf("No. of arrangement = %d ",perm(n,r));
    return 0;
}

int perm(int n,int r)
{
    int p;
    p=fact(n)/fact(r);
    return p;
}

int fact(int x)
{
    int f=1,i;
    for(i=1;i<=x;i++)
      f=f*i;
    return f;
}
