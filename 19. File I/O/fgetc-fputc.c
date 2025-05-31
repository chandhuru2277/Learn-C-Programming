#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("./file_1.txt", "r");
    if (fp == NULL)
    {
        perror("file error");
    }
    else
    {
        char ch;
        ch = fgetc(fp);
        printf("%c", ch);

        fclose(fp);

        fp = fopen("./file_1.txt", "w");
        if (fp == NULL)
        {
            perror("file error");
        }
        else
        {
            ch = 'm';
            fputc(ch, fp);

            fclose(fp);
        }
    }

    return 0;
}