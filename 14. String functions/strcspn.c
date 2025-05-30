#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str1 = "abc123def";
    char *str2 = "1234567890";

    size_t pos = strcspn(str1, str2);
    printf("\nposition: %zu\n", pos);
    return 0;
}