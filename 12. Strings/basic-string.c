#include <stdio.h>

int main(void)
{
    // STATIC METHOD
    char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; // include '\0', so length is 6
    printf("\nstr1: %s\n", str1);

    char str2[6] = "Hello"; // include '\0' , so length is 6
    printf("\nstr2: %s\n", str2);

    // DYNAMIC METHOD (without mention size)
    char str3[] = "Hello"; // array of character or strings
    printf("\nstr3: %s\n", str3);

    return 0;
}