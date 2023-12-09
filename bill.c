#include<stdio.h>
void main()
{
  int calls;
  float bill;
  printf("Enter the numbers of calls\n");
  scanf("%d",&calls);
  if(calls<=150)
  {
  bill=0;
  }
  else if(calls>150 && calls<=400)
  {
  bill=(calls-150)*0.8;
  }
  else if(calls>400 && calls<=800)
  {
  bill=((calls-400)*1)+(250*0.8);
  }
  else
  {
  bill=((calls-800)*1.2)+(400*1)+(250*0.8);
  }
  bill=bill+150;
  printf("The final bill is %f",bill);
}
