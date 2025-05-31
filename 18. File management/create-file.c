#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("./file_1.txt", "w");
    if (fp == NULL)
    {
        perror("file open error");
    }
    else
    {
        char buffer[100];
        printf("\nEnter the message:");
        fgets(buffer, 100, stdin);
        fprintf(fp, "%s", buffer);

        fclose(fp);
    }
    return 0;
}