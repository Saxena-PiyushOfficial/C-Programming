#include<stdio.h>
void main()
{
 char name[]="Piyush";
 char *p;
 p=name;
 int i=0;
 while(*p!='\0')
 {
   printf("%c",*p);
   p++;
 }
}
