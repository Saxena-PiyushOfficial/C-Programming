#include<stdio.h>
void main()
{
    int arr[]={10,20,30,45,67,56,74};
  int i=4,*j,*k,*x,*y;
  j=&i;
  printf("%u\n",j);
  j=j+9;
  printf("%d\n",j);
  k=&i;
  printf("%u\n",k);
  k=k-3;
  printf("%d\n",k);
  x=&arr[1];
  y=&arr[5];
  printf("%d\n",y-x);
  j=&arr[4];
  k=(arr+4);
}
