#include<stdio.h>
void main(){
int s,h,m;
printf("Enter the seconds=");
scanf("%d",&s);
 h=s/3600;
 s=s%3600;
 m=s/60;
printf("So the number of minutes is %d and number of hour is %d",m,h);
}
