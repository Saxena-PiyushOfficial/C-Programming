#include<stdio.h>
void main()
{
int a,b,c;
float x,y;
printf("Enter the number a,b and c");
scanf("%d%d%d",&a,&b,&c);

x=(-b+sqrt(b*b-4*a*c))/2*a;
y=(-b-sqrt(b*b-4*a*c))/2*a;
printf("the roots are x=%f and y=%f",x,y);
}
