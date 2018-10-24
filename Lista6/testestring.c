#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nome[40];
    int i;

    for(i=0;i<3;i++)
    {
        printf("\n digite nome:");
        gets(nome);

        if(isupper(nome[i]))
        {
            nome[i]=tolower(nome[i]);
        }

         else if(islower(nome[i]))
        {
            nome[i]=toupper(nome[i]);
        }
    }

    for(i=0;i<3;i++)
    {
        printf("%s",nome);
    }

    return 0;
}