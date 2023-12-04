#include<stdio.h>
void main()
{
   int n,i;
   int fact=1;
   printf("enter the number\n");
   scanf("%d",&n);
   for(i=n;i>0;i--)
   {
      fact=fact*i;
   }
   printf("%d",fact);
}
