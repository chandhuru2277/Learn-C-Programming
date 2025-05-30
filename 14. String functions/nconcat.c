#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100] = "Hello";
    char *str2 = " World";

    strncat(str1, str2, 3);
    printf("\nnconcat: %s\n", str1);

    return 0;
}