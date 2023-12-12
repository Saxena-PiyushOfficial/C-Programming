#include<stdio.h>
void main()
{
  int a,b,c;
  printf("Enter the number a,b and c\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && a>c)
  {
  printf("The greater is %d",a);
  }
  else if(b>c)
  {
  printf("The greater is %d",b);
  }
  else
  {
  printf("The greatest is %d",c);
  }
}
