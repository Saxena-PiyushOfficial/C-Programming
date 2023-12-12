#include<stdio.h>
void main()
{
    int a,b,c,p,q,r,t1,t2;
    float per;
    printf("Enter the marks of first subject : ");
    scanf("%d",&a);
    printf("From : ");
    scanf("%d",&p);
    printf("Enter the marks of second subject : ");
    scanf("%d",&b);
    printf("From : ");
    scanf("%d",&q);
    printf("Enter the marks of third subject : ");
    scanf("%d",&c);
    printf("From : ");
    scanf("%d",&r);
    t1=a+b+c;
    t2=p+q+r;
    per=t1*100.0/t2;
    printf("Marks : %d",t1);
    printf("\nFrom : %d",t2);
    printf("\nPercentage : %f",per);
}
