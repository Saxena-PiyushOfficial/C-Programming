#include<stdio.h>
void main()
{
   int n,d,i,max,min;
   printf("enter the number\n");
   scanf("%d",&n);
   max=0;
   min=9;
   for(i=1;i<=n;i++)
   {
      d=n%10;
      n=n/10;
      if(d>max)
      {
        max=d;
      }
      if(d<min)
      {
       min=d;
      }
   }
   printf("\nmax=%d\tmin=%d",max,min);
}
