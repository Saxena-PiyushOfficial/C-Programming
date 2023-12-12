#include<stdio.h>
void main()
{
    int a[5],i,f,min,HCF;
    //input
    for(i=0;i<5;i++)
    {
        printf("enter the element ");
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    HCF=min;
    for( ; ; )
    {
        f=1;
        for(i=0;i<5;i++)
        {
            if(a[i]%HCF!=0)
            {
                f=0;
                break;
            }
        }
            if(f==1)
            {
                break;
            }
            HCF--;
    }
    printf("the HCF=%d",HCF);

}
