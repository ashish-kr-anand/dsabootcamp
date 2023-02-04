// Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int i,a,b,x,hcf;
    printf("Enter two num: ");
    scanf("%d%d",&a,&b);
    x=a<b?a:b;
    for(i=1;i<=x;i++)
    {
    if(a%i==0 && b%i==0)
     hcf=i;
    }
    printf("hcf of %d and %d = %d",a,b,hcf);
     return 0;
}