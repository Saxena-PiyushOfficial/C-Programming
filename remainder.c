#include<stdio.h>
void main()
{
  int d,q,r,D;
  printf("Enter the Divisor and dividend\n");
  scanf("%d%d",&D,&d);
  q=D/d;
  r=D-d*q;
  printf("%d",r);
}
