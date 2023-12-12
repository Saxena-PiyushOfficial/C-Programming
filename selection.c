#include<stdio.h>
void selection_sort(int x[],int n)
{
    int i,index,large,j;
    for(i=n-1;i>0;i--)
    {
        large=x[0];
        index=0;
        for(j=1;j<=1;j++)
        {
            if(x[j]>large)
            {
                large=x[j];
                index=j;
            }
        }
        x[index]=x[i];
        x[i]=large;
    }
}
int main()
{
    int i,n=6,a[]={10,24,36,48,50,66};
    selection_sort(a,n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
}
