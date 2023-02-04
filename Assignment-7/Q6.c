// Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
    int i,j,flag=0;
    for(i=2;i<=100;i++)
    {
      for(j=2;j<=i/2;j++)
       {
          flag=0;
          if(i%j==0)
          {
            flag=1;
            break;
          }
       }
       if(flag==0)
       printf("%d ",i);
    }
    return 0;
}
  