#include<stdio.h>

int main(void)
{
    char ch;
    ch= getc(stdin);
    putc(ch, stdout);
    return 0;
}