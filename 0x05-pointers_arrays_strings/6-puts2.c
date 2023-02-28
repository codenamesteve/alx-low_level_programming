#include <stdio.h>
#include <string.h>
/**
 * puts2 - Main Code Insertion
 * @str: char type pointer.
 */
void puts2(char *str)
{
int x = strlen(str);
int i;
for (i = 0; i < x; i++)
{
if (i == 0)
{
putchar(str[i]);
}
else if (i % 2 != 0)
{
continue;
}
else
{
putchar(str[i]);
}
}
putchar('\n');
}
