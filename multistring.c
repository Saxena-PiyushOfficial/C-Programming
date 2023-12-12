#include<stdio.h>
#include<string.h>
void main()
{
  //char list[6][20]={"akshay","piyush","samarth","shiva","gopal","rajesh"};
  char list[6][20];
  int i;
  char yourname[20];
  for(i=0;i<=5;i++)
    scanf("%s",&list[i][0]);
  printf("enter your name\n");
  scanf("%s",yourname);
  for(i=0;i<=5;i++)
  {
      if(strcmp(&list[i][0],yourname)==0)
      {
          printf("Welcome,you can enter the palace\n");
          return 0;
      }
  }
  printf("so Sorry you can't enter to palace");
  return 0;
}
