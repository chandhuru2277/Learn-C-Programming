#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str1 = "abcd1234";
    char *str2 = "abcd6789";

    size_t pos = strspn(str1, str2);
    printf("\nposition: %zu\n", pos);
    return 0;
}