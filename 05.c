#include<stdio.h>
void main()
{
 int i,count=0,n;
 printf("enter the number\n");
 scanf("%d",&n);
 for(i=1;i<=n/2;i++)
 {
     if(i%2==0)
     {
         count=count+3;
     }
     else
     {
         count=count+1;
     }
     printf("%d ",count);
 }

}
