#include<stdio.h>
void main()
{
     int i,n,sum=0;
     printf("Enter the number\n");
     scanf("%d",&n);
     for(i=0;i<=n;i++)
     {
        sum=sum+i;
     }
     printf("The sum till %d is %d",n,sum);
}
