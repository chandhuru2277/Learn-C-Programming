#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str = " This message usage is alert of communication signal lost";
    char *result = strrchr(str, 'm'); // it's checks start from end of the string

    printf("\nstrrchr: %s\n", result);

    return 0;
}