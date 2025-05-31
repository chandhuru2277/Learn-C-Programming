#include <stdio.h>

int main(void)
{
    char buffer[100];
    printf("\nEnter message:\n");
    gets(buffer); // overflow
    printf("\nyour message:\n");
    puts(buffer);

    return 0;
}