#include<stdio.h>
void main()
{
    int amt;
    printf("Enter amt\n");
    scanf("%d",&amt);
    if(amt>=10000)
    {
       amt=0.05*amt+amt;
    }
    else
    {
     amt;
    }
    printf("%d",amt);
}
