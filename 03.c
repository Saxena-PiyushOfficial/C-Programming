#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=2;i<=n;)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
        else
        {
            i++;
        }
    }
}

