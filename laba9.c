#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[]="Chin chopa 123 fresh meat";
    int i=0,sim=1,slv=1;
    while(str[i]!='\n')
    {
        if (sim==slv)
            {
                printf("%c",str[i]);
            }
        if (str[i]==' ')
            {
                slv++;
                sim=0;
                sim++;
                i++;
            }
    }
    return 0;
    }