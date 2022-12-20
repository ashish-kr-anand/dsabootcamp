// Write a program to find the position of first 1 in LSB
#include<stdio.h>
int main()
{
    int x,y,count=0;
    printf("Enter number :");
    scanf("%d",&x);
    while(x != 0)
    {
        y=x&1;
        count=count +1;
        if(y==1)
        {
        printf("position of first lsb=%d",count);
        break;
        }
        x=x>>1;
    }
    if(x==0)
     printf("there is no 1 in lsb");
    return 0;
}