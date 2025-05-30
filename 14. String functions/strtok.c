#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = " This communication message usage is alert of communication signal lost";
    char *result = strtok(str, " ");

    while (result != NULL)
    {
        printf("\n%s\n", result);
        result = strtok(NULL, " ");
    }
    return 0;
}