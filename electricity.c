#include<stdio.h>
void main()
{
  int unit;
  float bill;
  printf("Enter the unit\n");
  scanf("%d",&unit);
  if(unit<=100)
  {
  bill=5;
  }
  else if(unit>100 && unit<=200)
  {
  bill=(unit-100)*5.5 + 5;
  }
  else if(unit>200 && unit<=300)
  {
  bill=(unit-200)*5.75 + 5.5 +5;
  }
  else if(unit>300 && unit<=500)
  {
  bill=(unit-300)*6 +5.75+5.5+5;
  }
  else
  {
  bill=(unit-500)*6.5 +6+5.75+5.5+5;
  }
  bill=bill+100;
  printf("%f",bill);
}
