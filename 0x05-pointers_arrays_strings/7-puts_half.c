#include <stdio.h>
#include <string.h>
/**
 * puts_half - Main Code Insertion
 * @str: char type pointer.
 */
void puts_half(char *str)
{
int x = strlen(str);
int n;
int i;
if (x % 2 != 0)
{
n = (x + 1) / 2;
}
else
{
n = x / 2;
}
for (i = n; i < x; i++)
{
putchar(str[i]);
}
putchar('\n');
}
