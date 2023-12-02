#include<stdio.h>
void main()
{
    int i,n,d,max,min;
    printf("Enter the number total\n");
    scanf("%d",&n);
     printf("Enter the number\n");
     scanf("%d",&d);
    max=d;
    min=d ;
    for(i=2;i<=n;i++)
    {

        if(d>max)
        {
            max=d;
        }
        if(d<min)
        {
            min=d;
        }
    }
    printf("the max is %d and min is %d",max,min);
}
