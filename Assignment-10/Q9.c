// Write a function to check whether a given number contains a given digit or not.(TSRN)
#include<stdio.h>
void cont(int,int);
int main()
{
    int x,z;
    printf("Enter num and digit : ");
    scanf("%d%d",&x,&z);
    cont(x,z);
    return 0;
}

void cont(int x,int z)
{
    int y;
     while(x!=0)
    {
       y=x%10;
       if(z==y)
       {
        printf("Digit is present");
        break;
       }
       x=x/10;
       if(x==0)
       printf("Digit is not present");
    }
  
}
