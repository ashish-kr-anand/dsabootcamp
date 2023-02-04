// Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int a,b,i,j,flag=0;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        flag=0;
        if(i==1)
        flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            flag=1;
        }
        if(flag==0)
        printf("%d ",i);
    }
    return 0;
}
