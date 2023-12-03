#include<stdio.h>
void main()
{
  int i,j,n,m;
  printf("enter");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   for(j=1;j<i;j++)
    {
   printf(" ");
    }
    for(m=1;m<=n-i+1;m++)
    {
   printf("%d",m);
    }
    printf("\n");
  }
}
