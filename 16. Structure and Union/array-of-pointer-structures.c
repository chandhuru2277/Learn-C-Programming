#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[100];
};

int main(void)
{

    struct student s[5];
    struct student *sp[5];

    // ASSIGN ADDRESS TO THE POINTERS
    for (int i = 0; i < 5; i++)
    {
        sp[i] = &s[i];
    }

    // USER INPUT
    for (int i = 0; i < 5; i++)
    {
        sp[i]->id = i;
        scanf("%99s", sp[i]->name);
    }

    // PRINT VALUES
    for (int i = 0; i < 5; i++)
    {
        printf("\nid: %d name: %s\n", sp[i]->id, sp[i]->name);
    }

    return 0;
}