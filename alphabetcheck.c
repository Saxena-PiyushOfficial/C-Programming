#include<stdio.h>
void main()
{
   char ch;
   printf("Enter the alphabet\n");
   scanf("%c",&ch);
   if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
   {
   printf("%c is a alphabet",ch);
   }
   else
   {
      printf("Not alphabet");
   }
}
