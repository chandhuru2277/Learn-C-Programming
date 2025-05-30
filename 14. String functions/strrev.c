#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = " This communication message usage is alert of communication signal lost";
    printf("\nReverse string:\n %s\n", strrev(str)); // STRREV(*STR) IS NOT WORKS IN LINUX
    
    return 0;
}