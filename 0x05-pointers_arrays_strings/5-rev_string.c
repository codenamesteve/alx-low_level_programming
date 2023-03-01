#include <stdio.h>
#include <string.h>
/**
 * rev_string - Main Code Insertion
 * @s: char type pointer.
 */
void rev_string(char *s)
{
int i, j;
char temp;
j = strlen(s) - 1;
for (i = 0; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
printf("%s\n", s);
}
