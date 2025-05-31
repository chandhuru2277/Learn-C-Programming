#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "Hello world!";
    char dest[100];

    int len = strlen(src);

    // MEMOVE(DEST, SRC, SIZE_OF_ITEM)
    memmove(dest, src, sizeof(src));// overlap problem is not occur

    printf("\ndest: %s\n", dest);

    return 0;
}