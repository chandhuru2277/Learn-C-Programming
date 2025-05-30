#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str = " This communication message usage is alert of communication signal lost";
    char *result = strstr(str, "communication"); // it's checks start from beginning of the string

    printf("\nstrstr: %s\n", result);
    return 0;
}