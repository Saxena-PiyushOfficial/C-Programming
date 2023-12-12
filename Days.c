#include<stdio.h>
void main(){
int days,y,m,w,d;
printf("Enter the numbers of days=");
scanf("%d",&days);
  y=days/365;
  days=days%365;

  m=days/30;
  days=days%30;

  w=days/7;
  days=days%7;

  d=days;
printf("Number of years=%d\n months=%d\n week=%d\n days remaining=%d",y,m,w,d);
}
