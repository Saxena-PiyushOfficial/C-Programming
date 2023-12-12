#include<stdio.h>
int rom(int,int,char);
void main()
{
    int yr;
    printf("enter trhe yr:\n");
    scanf("%d",&yr);
    yr=rom(yr,1000,'m');
    yr=rom(yr,500,'d');
    yr=rom(yr,100,'c');
    yr=rom(yr,50,'l');
    yr=rom(yr,10,'x');
    yr=rom(yr,5,'v');
    rom(yr,1,'i');
}
int rom(int y,int k,char ch)
{
    int i,j;
    j=y/k;
    for(i=1;i<=j;i++)
        printf("%c",ch);

    return(y%k);
}
