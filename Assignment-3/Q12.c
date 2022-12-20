// Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter alphabet: ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
     printf("alphabet is in lowercase");
    if(ch>='A' && ch<='Z')
     printf("alphabet is in uppercase");
     return 0;

}