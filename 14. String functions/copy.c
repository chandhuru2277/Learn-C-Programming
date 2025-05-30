#include <stdio.h>
#include <string.h>

int main(void)
{
    // METHOD 1
    char str[] = "Hello world";
    char temp[100];
    strcpy(temp, str);
    printf("\nresult of copy: %s\n", temp);

    // METHOD 2
    char *src = "Hello world";
    char dest[100];
    strcpy(dest, src);
    printf("\nresult of copy: %s\n", dest);

    return 0;
}