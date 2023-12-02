#include<stdio.h>
void main()
{
    int n,i,f=1;
    printf("enter\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;)
    {
    if(n%i==0)
    {
    f=0;
    break;
    }
    else
    {
    i++;
    }
    }
    if(f==1)
    {
        printf("Prime");
    }
    else
        {
        printf("Not prime");
        }
}
