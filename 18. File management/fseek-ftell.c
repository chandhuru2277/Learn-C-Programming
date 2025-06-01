#include<stdio.h>
#include<string.h>

int main(void)
{
    FILE *fp= fopen("./file_4.txt", "r");
    if(fp==NULL)
    {
        perror("file is error");
    }
    else
    {
        
        int pos= ftell(fp);
        printf("\ncurrent position: %d\n", pos);

        fseek(fp,5,SEEK_CUR);
        pos= ftell(fp);
        printf("\nset current position (5): %d\n", pos);

        fseek(fp, 2, SEEK_SET);
        pos= ftell(fp);
        printf("\nset position (2): %d\n", pos);

        fseek(fp, -2, SEEK_END);
        pos= ftell(fp);
        printf("\nmove cursor -2 reverse order (-2): %d\n", pos);

        char ch= fgetc(fp);
        printf("\ncharacter: %c\n", ch);

        fclose(fp);
    }

    return 0;
}