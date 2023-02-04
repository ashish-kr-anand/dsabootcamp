// Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float intrest(float,int,int);
int main()
{
    int p,r,t;
    float z;
    printf("Enter value of principal rate and time: ");
    scanf("%d%d%d",&p,&r,&t);
    z=intrest(p,r,t);
    printf("Simple intrest=%0.2f",z);
}

float intrest(float p,int r,int t)
{
    float si;
    si=p*r*t/100;
    return si;
}