#include<stdio.h>
void main()
{
int num,s;
printf("Enter the number:");
scanf("%d",&num);
s=sum(num);
printf("The sum is %d",s);
}
int sum(int num)
{
  int d,r;
  if(num!=0)
  {
  d=num%10;
  r=d+sum(num/10);
  }
  else
  return 0;

  return r;

}
