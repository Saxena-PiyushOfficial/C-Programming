#include<stdio.h>
void main()
{
    int amt;
  float a,b,c,d,e,f,g,h,i,j;
  printf("Enter the amount\n");
  scanf("%d",&amt);

  a=amt/2000;
  amt=amt%2000;

  b=amt/500;
  amt=amt%500;

  c=amt/200;
  amt=amt%200;

  d=amt/100;
  amt=amt%100;

  e=amt/50;
  amt=amt%50;

  f=amt/20;
  amt=amt%20;

  g=amt/10;
  amt=amt%10;

  h=amt/5;
  amt=amt%5;

  i=amt/2;
  amt=amt%2;

  j=amt;
  printf("2000=%f\t500=%f\t200=%f\t100=%f\t50=%f\t20=%f\t10=%f\t5=%f\t2=%f\t1=%f",a,b,c,d,e,f,g,h,i,j);

}
