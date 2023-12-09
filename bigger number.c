#include<stdio.h>
void main(){
int a,b,max;
printf("Enter the value of a and b");
scanf("%d%d",&a,&b);
if(a>b)
{
max=a;
}else
{
max=b;
}
printf("maximum is %d",max);
}
