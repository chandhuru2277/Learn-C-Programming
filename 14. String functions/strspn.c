#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str1 = "abcd1234";
    char *str2 = "abcd6789";

    long int pos = strspn(str1, str2);
    printf("\nposition: %ld\n", pos);
    return 0;
}