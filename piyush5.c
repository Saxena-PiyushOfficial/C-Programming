#include<stdio.h>
void main()
{
    int a[7],i,k,j,f,b[7],ele;
    //input
    for(i=0;i<7;i++)
    {
        printf("enter the element ");
        scanf("%d",&a[i]);
    }
    //display
    printf("/n the display of a[i] : \n");
    for(i=0;i<7;i++)
    {
        printf("%d\t",a[i]);
    }
    k=0;
    //logic to remove of duplicate
    for(i=0;i<7;i++)
    {
        f=1;
        ele=a[i];
        j=0;
        while(j<k)
        {
            if(b[j]==ele)
            {
                f=0;
                break;
            }
            j++;
        }
        if(f==1)
        {
            b[k]=ele;
            k++;
        }
    }
    printf("\n");
    //display
    printf("/n the display of after removing of duplicate : \n");
    for(i=0;i<k;i++)
    {
        printf("%d\t",b[i]);
    }

}

