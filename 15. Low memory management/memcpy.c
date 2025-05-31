#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "Hello world!";
    char dest[100];

    int len = strlen(src);
    
    // MEMCPY(DEST, SRC, SIZE_OF_ITEM)
    memcpy(dest, src, sizeof(src));// overlap problem is occur

    printf("\ndest: %s\n", dest);

    return 0;
}