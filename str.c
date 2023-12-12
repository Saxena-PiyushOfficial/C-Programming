#include<stdio.h>
void main()
{
 char name[25];
 printf("enter:");
   scanf("%[^\n]s",name);
   printf("%s",name);
}
