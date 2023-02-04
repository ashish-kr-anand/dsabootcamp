// Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void nat(int);
int main()
{
    int x;
    printf("Enter n :");
    scanf("%d",&x);
    nat (x);

}

void nat(int x)
{
    int i;
   for(i=1;i<=x;i++)
     printf("%d ",i);
    
}