#include<stdio.h>
void main()
{
   int n,d,i,sum=0;
   printf("enter the number\n");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      d=n%10;
      sum=sum+d;
      printf("%d\t",d);
      n=n/10;
   }
   printf("\nsum=%d\t",sum);
}
