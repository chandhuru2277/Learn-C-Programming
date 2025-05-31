#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp = fopen("./file_2.txt", "w");
    if (fp == NULL)
    {
        perror("file error");
    }
    else
    {
        char buffer[100];
        fgets(buffer, 100, stdin);
        fputs(buffer, fp);

        fclose(fp);

        char data[100];
        fp = fopen("./file_2.txt", "r");
        fgets(data, 100, fp);
        printf("%s", data);

        fclose(fp);
    }

    return 0;
}