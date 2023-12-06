#include<stdio.h>
void main()
{
    int d,m,y,f=1;
    printf("Enter the date,month and year\n");
    scanf("%d\n%d\n%d",&d,&m,&y);
    switch(m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if(d>31)
    {
     f=0;
    }
    break;
    case 2:
        if(y%4==0 && y%100!=0 || y%400==0)
        {
            if(d>29)
            {
                f=0;
            }
        }else
        {
           if(d>28)
           {
               f=0;
           }
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if(d>30)
    {
        f=0;
    }
    break;
    default :f=0;
}
switch(f)
{
    case 1: printf("Valid date");
    case 0: printf("Not valid date");
}

}
