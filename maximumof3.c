#include<stdio.h>
void main()
{
     int a,b,c,max,min;
     printf("enter the three no\n");
     scanf("%d%d%d",&a,&b,&c);
    max=a;
    min=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
     {
        max=c;
     }
     if(b<min)
        min=b;
     if(c<min)
        min=c;

    printf("%d \t %d",max,min);
}
