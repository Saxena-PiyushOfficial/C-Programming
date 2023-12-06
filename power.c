#include<stdio.h>
void main()
{
   int x,y,i;
   int p=1;
   printf("enter the number\n");
   scanf("%d%d",&x,&y);
   for(i=1;i<=y;i++)
   {
      p=p*x;
   }
   printf("%d",p);
}
