#include<stdio.h>
void main()
{
  int x=0,i;
  for(i=1;i<=20;i++)
  {

     if(i%2==0)
     {
       x=x+3;
     }
     else
     {
       x=x+1;
     }
     printf("%d\t",x);

  }

}
