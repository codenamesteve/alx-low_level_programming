#include <stdio.h>
#include <string.h>
/**
 * print_rev - Main Code Insertion
 * @str: int type pointer.
 */
void print_rev(char *str)
{
int x = strlen(str) - 1;
int i;
for (i = x; i >= 0; i--)
{
putchar(str[i]);
}
putchar('\n');
}
