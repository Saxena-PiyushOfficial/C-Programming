#include<stdio.h>
void main()
{
   int n,i,sum=0;
   printf("Enter the range\n");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
      sum=sum+i;
   }
   printf("%d",sum);
}
