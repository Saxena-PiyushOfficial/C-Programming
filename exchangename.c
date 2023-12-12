#include<stdio.h>
#include<string.h>
void main()
{
  char *name[]={"akshay","piyush","samarth","shiva","gopal","rajesh"};
  char *t;
  printf("%s and %s",name[2],name[3]);
      t=name[2];
      name[2]=name[3];
      name[3]=t;

    printf("\n%s and %s",name[2],name[3]);
}
