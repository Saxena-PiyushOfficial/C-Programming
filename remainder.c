#include<stdio.h>
void main(){
int p,d,q,r;
printf("Enter the value of p and d");
scanf("%d%d",&p,&d);
q=p/d;
r=p-(d*q);
printf("Remainder is=%d",r);
}
