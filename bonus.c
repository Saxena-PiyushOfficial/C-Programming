#include<stdio.h>
void main()
{
    float money,b;
    printf("Enter the amount deposited\n");
    scanf("%f",&money);
    if(money>=10000)
    {
        b=money*0.05;
    }
    else
    {
        b=0;
    }
    printf("Money : %f",money);
    printf("\nBonus : %f",b);
    printf("\nTotal : %f",money+b);
}
