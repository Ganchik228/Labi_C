#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
  char str[256];
  char del[]=", ";
  char *p = strtok(str, delim);
  printf("Please enter a string : ");
  scanf("%[^\n]",str);
  int len= strlen(str),a[len];
  printf("String =%s",str);
  return 0;
}