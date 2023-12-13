#include<stdio.h>
#include<string.h>
void main()
{
  char *name[]={"akshay","akshay","samarth","shiva","gopal","rajesh"};
  char *t;
  int i,j;
  for(i=0;i<6;i++)
  {
      for(j=i+1;j<6;j++)
      {
          if(strcmp(name[i],name[j])>0)
          {
              t=name[i];
              name[i]=name[j];
              name[j]=t;
          }
      }
  }
  for(i=0;i<6;i++)
    printf("\n%s\t",name[i]);
}
