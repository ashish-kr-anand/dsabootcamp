// Write a program to check whether a given number is an
//Armstrong number or not
#include<stdio.h>
#include<math.h>
int main()
{
    int i,rem,x=0,num,count=0,a,z;
    printf("Enter your num: ");
    scanf("%d",&i);
      z=i;
      num=i;
      while(i!=0)
      {
        a=i%10;
        i=i/10;
        count=count+1;
      }
      while(z!=0)
        {
          rem=z%10;
          z=z/10;
          x=x+pow(rem,count);
        }
        if(num==x)
         printf("%d is a armstrong number",num);
        else
         printf("%d is not armstrong number",num);
        
        return 0;
}
