#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "tirunelveli";
    char str2[] = "rei";

    char *ch = strpbrk(str1, str2);
    if(ch)
        printf("\nmatch: %c\n", *ch);
    else
        printf("\nnot found\n");
    return 0;
}