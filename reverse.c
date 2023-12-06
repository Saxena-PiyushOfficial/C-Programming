#include<stdio.h>
void main()
{
   int n,d,i,x,rev=0;
   printf("enter the number\n");
   scanf("%d",&n);
   x=n;
   for(i=0;i<n;i++)
   {
      d=n%10;
      rev=rev*10+d;
      n=n/10;
   }
   printf("\nrev=%d\n",rev);
   if(rev==x)
    printf("pal");
   else
    printf("not pal");
}
