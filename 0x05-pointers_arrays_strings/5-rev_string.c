#include <stdio.h>
#include <string.h>
/**
 * rev_string - Main Code Insertion
 * @s: char type pointer.
 */
void rev_string(char *s)
{
int lenght = strlen(s) - 1;
int i;
char temp;
for (i = 0; i < length; i--)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}
