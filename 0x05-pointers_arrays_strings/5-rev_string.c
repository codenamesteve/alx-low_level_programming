#include <stdio.h>
#include <string.h>
/**
 * rev_string - Main Code Insertion
 * @s: char type pointer.
 */
void rev_string(char *s)
{
int x = strlen(s) - 1;
int i;
for (i = x; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
