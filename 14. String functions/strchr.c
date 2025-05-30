#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str = " This message usage is alert of communication signal lost";
    char *result = strchr(str, 'm'); // it's checks start from the string

    printf("\nstrchr: %s\n", result);

    return 0;
}