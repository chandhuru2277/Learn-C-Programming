#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100] = "Hello";
    char *str2 = " World";

    strcat(str1, str2);
    printf("\nconcat: %s\n", str1);

    return 0;
}