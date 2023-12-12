#include<stdio.h>
void insert_sort(int x[],int n)
{
    int i,k,y;
    for(k=1;k<n;k++)
    {
        y=x[k];
        for(i=k-1;i>=0&&y<x[i];i--)
        {
            x[i+1]=x[i];
        }
        x[i+1]=y;
    }
}
int main()
{
    int n=6,a[]={10,22,36,48,50,62};
    insert_sort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
