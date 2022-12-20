// Write a program to take a three-digit number from the user and rotate its digits by 
// one position towards the right
#include<stdio.h>
int main()
{
    int x,rem,rot;
    printf("Enter three digit num: ");
    scanf("%d",&x);
    rem=x%10;
    x=x/10;
    rot=rem*100+x;
    printf("%d",rot);
    return 0;
}
