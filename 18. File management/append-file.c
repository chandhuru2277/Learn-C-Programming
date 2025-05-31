#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp = fopen("./file_3.txt", "a");
    if (fp == NULL)
    {
        perror("File read is error");
    }
    else
    {
        char buffer[100];
        fgets(buffer, 100, stdin);
        fputs(buffer, fp);
    
        fclose(fp);
    }
    return 0;
}