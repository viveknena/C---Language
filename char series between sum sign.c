#include<stdio.h>

int main()
{
 
    char ch;
    for (ch='A';ch<='Z';ch++)
    {
      if (ch<'Z')
      {
        printf("%c+",ch);
      }
      else
      {
        printf("%c",ch);
      }
    }
    return 0;
}