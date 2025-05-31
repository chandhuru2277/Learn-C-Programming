#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[100];
};

int main(void)
{
    // ARRAY OF STRUCTURE
    // SYNTAX: STRUCT STRUCTURE_NAME VARIABLE_NAME[SIZE]
    struct student s[5];

    for (int i = 0; i < 5; i++)
    {
        s[i].id = 1;
        // GET USER INPUT
        scanf("%99s", s[i].name);
    }

    //  PRINT THE STRUCTURE VALUES
    for (int i = 0; i < 5; i++)
    {
        printf("\nid: %d name: %s\n", s[i].id, s[i].name);
    }
    return 0;
}