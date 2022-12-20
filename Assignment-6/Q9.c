<<<<<<< HEAD
// Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     printf("%d ",i*i*i);
     return 0;
}
=======
// Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
  int i,a,b;
  printf("Enter two number:");
  scanf("%d%d",&a,&b);
  for(i=1;i<=a*b;i++)
  {
   if(i%a==0 && i%b==0)
     break;
  }
printf("Lcm=%d",i);
return 0;
}
>>>>>>> 106570c (upload)
