// Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
    int n,i,j,flag=0,count=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=n;1;i++)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
             {
                flag=1;
                break;
             }
        }
        count++;
        if(flag==0 && count>1)
        {
            printf("Next prime=%d ",i);
            break;
        }
    }
}