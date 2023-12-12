#include<stdio.h>
void main(){
int amt,a,b,c,d,e,f,g,h,i,j;
printf("Enter the amount=");
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

j=amt/1;
amt=amt%1;
printf("The number of notes of 2000Rs is %d\n 500 Rs is %d\n 200 Rs is %d\n 100 Rs is %d\n 50 Rs is %d\n 20 Rs is %d\n 10 Rs is %d\n 5 Rs is %d\n 2 Rs is %d\n 1 Rs is %d\n",a,b,c,d,e,f,g,h,i,j);
}
