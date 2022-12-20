// Write a program to find the greatest among three given numbers. Print number once 
//if the greatest number appears two or three times

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three num: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
       if(a>c)
      printf("Greater num is %d ",a);
    }
     else if(b>c)
      printf("Greater num is %d ",b);
      else
       printf("Greater num is %d ",c);
       return 0;
}