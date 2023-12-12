#include<stdio.h>
void main()
{
   int percentage,c;
   printf("Enter the percentage and class");
   scanf("%d%d",&percentage,&c);

   if(percentage>=60)
   {
   if(c==10)
   {
   printf("You will get 1000 Rs");
   }
   else if(c==12)
   {
   printf("You will get 2000 Rs");
   }
   else
   {
   printf("You are not eligible");
   }
   }
   else
   {
        printf("You lack percentage");
   }
}
