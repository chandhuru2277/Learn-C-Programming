#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[100];
    struct student *next;
};

int main(void)
{
    struct student s1;
    s1.id = 1;
    strcpy(s1.name, "william");
    s1.next = NULL;

    struct student *head = NULL;
    head = &s1;

    printf("\nid: %d name: %s next: %p\n", head->id, head->name, head->next);

    return 0;
}