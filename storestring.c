#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
  char *str[]={"To era is human","but i am lazy","but"," love to code"};
  char str1[20],*p;
  int i;
  printf("enter to search:\n");
  scanf("%s",str1);
  p=NULL;
  for(i=0;i<4;i++)
  {
      p=strstr(str[i],str1);
      if(p!=NULL)
      {
        printf("%s found in array",str1);
        return 0;
      }
  }
  printf("%s not found in array",str1);

}
