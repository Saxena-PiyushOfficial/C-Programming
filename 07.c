#include<stdio.h>
void main()
{
     int i,j,n,m;
     printf("enter the number\n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
       for(j=1;j<=n-i;j++)
      {
        printf(" ");
      }
      for(m=i;m>=1;m--)
      {
          printf("%d",m);
      }
      for(j=2;j<=i;j++)
      {
        printf("%d",j);
      }
      for(i=1;i<=n;i++)
     {
       for(j=1;j<n-i;j++)
      {
        printf(" ");
      }
      for(m=1;m<=n-i+1;m++)
      {
          printf("%d",m);
      }
      printf("\n");
     }

     for(i=n;i>=1;i--)
     {
         for(j=1;j<=i;j++)
         {
             printf("%d",j);
         }
         printf("\n");
     }

      printf("\n");
     }

}
