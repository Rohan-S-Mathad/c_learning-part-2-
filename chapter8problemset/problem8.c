#include <stdio.h>
#include <string.h>
void count(char st[])
{

     int a = 0;
     char s;
     printf("enter which charcter to count");
     getchar();
     scanf("%c", &s);
     for (int i = 0; i < strlen(st); i++)
     {

          if (st[i] == s)
          {
               a++;
          }
     }
     printf("the charter %c is present in given string is %d", s, a);
}
int main()
{
     char t[30];
     printf("enter the string ");
     scanf("%s", t);

     count(t);

     return 0;
}