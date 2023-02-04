// Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
#include<math.h>
int main()
{
  int i,x,y,z,count=0,sum=0;
  for(i=1;i<=1000;i++)
  {
    y=i;
    z=i;
    sum=0;
    count=0;
    while(y!=0)
    {
      x=y%10;
      y=y/10;
      count++;
    }
    while(z!=0)
    {
      x=z%10;
      z=z/10;
      sum=sum+pow(x,count);
    }
    if(i==sum)
    printf("%d ",i);
  }
  return 0;
}