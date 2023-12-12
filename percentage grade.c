#include<stdio.h>
void main()
{
  float per;
  printf("Enter the percentage\n");
  scanf("%f",&per);

  if(per>=90 && per<100)
  {
  printf("Your grade is A+");
  }
  else if(per>=80 && per<90)
  {
  printf("Your grade is B");
  }
  else if(per>=70 && per<80)
  {
  printf("Your grade is C");
  }
  else if(per>=60 && per<70)
  {
  printf("Your grade is D");
  }
  else if(per>=50 && per<60)
  {
  printf("Your grade is E");
  }
  else
  {
  printf("You are fail");
  }
}
