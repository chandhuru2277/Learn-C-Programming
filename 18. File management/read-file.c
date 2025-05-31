#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp = fopen("./file_2.txt", "r");
    if (fp == NULL)
    {
        perror("File read is error");
    }
    else
    {
        char buffer[100];
        fgets(buffer, 100, fp);
        printf("\nmessge: %s\n", buffer);

        fclose(fp);
    }
    return 0;
}