#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp = fopen("./file_3.txt", "w");
    if (fp == NULL)
    {
        perror("file error");
    }
    else
    {
        fprintf(fp, "Hello world");
        fclose(fp);

        fp = fopen("./file_3.txt", "r");
        if (fp == NULL)
        {
            perror("file error");
        }
        else
        {
            char buffer[100];
            fscanf(fp, "%s", buffer);
            printf("%s\n", buffer);

            fclose(fp);
        }
    }

    return 0;
}