// Write a program to check whether two given numbers are co-prime
// numbers or not
#include<stdio.h>
int main()
{
    int a,b,i,x,z;
    printf("Enter two num: ");
    scanf("%d%d",&a,&b);
    x=a<b?a:b;
    for(i=1;i<=x;i++)
    {
     if(a%i==0 && b%i==0)
         z=i;
    }
    if(z==1)
    printf("Num is co-prime");
    else
    printf("Num is not co-prime");
    return 0;
    
}