#include <stdio.h>
/*
 * main Entry point - prints the alphabet in lowercase, followed by a new line.
 *
 * only use putchar
 *
 * Return always 0
 *
 */
int main(void)
{
    char c = 'a';
    while (c <= 'z')
    {
        putchar(c);
        ++c;
    }
    putchar('\n');

    return 0;
}
