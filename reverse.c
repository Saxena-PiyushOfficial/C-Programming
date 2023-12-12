#include<stdio.h>
#include<string.h>
void xstrrev(char *s)
{
    int l,i;
    char *t,temp;
    l=strlen(s);
    t=s+l-1;
    for(i=1;i<=l/2;i++)
    {
        temp=*s;*s=*t;*t=temp;
        s++;t--;
    }
}
void main()
{
  char str[][35]={"To era is human","but i am lazy","but"," love to code"};
  int i;
  for(i=0;i<=3;i++)
  {
      xstrrev(str[i]);
      puts(str[i]);
  }
}
