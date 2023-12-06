#include<stdio.h>
void main()
{
   int n,i,f=1;
   printf("enter the number\n");
   scanf("%d",&n);
   for(i=2;i<n/2;i++)
   {
      if(n%i==0)
      {
        f=0;
        break;
      }
   }
   if(f==1)
   {
   printf("Prime");
   }
   else
   {
   printf("Not prime");
   }
}
