#include<stdio.h>
void main()
{
    int a[5],i,f,max,LCM;
    //input
    for(i=0;i<5;i++)
    {
        printf("enter the element ");
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    LCM=max;
    for( ; ; )
    {
        f=1;
        for(i=0;i<5;i++)
        {
            if(LCM%a[i]!=0)
            {
                f=0;
                break;
            }
        }
            if(f==1)
            {
                break;
            }
            LCM=LCM+max;
    }
    printf("the LCM=%d",LCM);

}

