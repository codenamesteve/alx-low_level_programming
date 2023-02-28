#include <stdio.h>
#include <string.h>
/**
 * puts_half - Main Code Insertion
 * @str: char type pointer.
 */
void puts_half(char *str)
{
int x = strlen(str);
if (x % 2 != 0)
{
  int n = (x - 1) / 2;
}
else
{
  int n = x / 2;
}
int i;
for (i = n; i < x; i++)
{
putchar(str[i]);
}
putchar('\n');
}
