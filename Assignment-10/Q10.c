// Write a function to print all prime factors of a given number. For example, if the 
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include<stdio.h>
void prime(int);
int main()
{
    int x;
    printf("Enter num :");
    scanf("%d",&x);
    prime(x);
    return 0;
}

void prime(int x)
{
   int i;
   for(i=2;x!=1;i++)
   {
     while(x%i==0)
    {
      x=x/i;
      printf("%d ",i);
    }
   }
}