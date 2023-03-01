#include <string.h>
/**
 * rev_string - Main Code Insertion
 * @s: char type pointer.
 */
void rev_string(char *s)
{
int length = strlen(s) - 1;
int i;
char temp;
for (i = length; i >= 0; i--)
{
temp += putchar(s[i]);
}
s = temp;
}
