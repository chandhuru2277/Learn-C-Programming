#include <stdio.h>

int main(void)
{
    char buffer[100];
    int year = 2025;
    sprintf(buffer, "Hello world %d", year);
    printf("%s\n", buffer);

    char data[100] = "ok 300";
    char msg[100];
    int code;
    sscanf(data, "%s %d", msg, &code);
    printf("%s %d\n", msg, code);

    return 0;
}