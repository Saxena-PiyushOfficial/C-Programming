#include<stdio.h>
void main(){
   int a,b;
   printf("Enter the value of a and b:-");
   scanf("%d%d",&a,&b);
   a=a-b;
   b=a+b;
   a=a-b;
   printf("result is a=%d and b=%d",a,b);
}
