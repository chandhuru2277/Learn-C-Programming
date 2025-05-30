#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "Hello world";
    char *str2 = "Hello world";

    int status = strcmp(str1, str2);
    if (status == 0)
        printf("\nMatch\n");
    else if (status > 0)
        printf("\nstr1 is higher than str 2\n");
    else
        printf("\nstr1 is lower than str 2\n");

    return 0;
}