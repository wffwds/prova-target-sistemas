#include <stdio.h>
#include <string.h>

void inverte(char * s)
{
    int i, fim = strlen(s);
    char r[fim];
    for (i = 0 ; i < fim ; i++)
    {
        r[i] = s[fim - i - 1];
    }
    r[i] = '\0';   
    printf("%s", r);
}

int
main()
{    
    char s[] = "odnum alo";
    inverte(s);

   return 0;
}
