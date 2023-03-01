#include <stdio.h>
#include <string.h>
/**
 * rev_string - Main Code Insertion
 * @s: char type pointer.
 */
void rev_string(char *s)
{
/*int length = strlen(s) - 1;
int i;
for (i = length; i >= 0; i--)
{
s = putschar(s[i]);
}*/
int length = strlen(s);
char *start = s;
char *end = s + length - 1;
char temp;

while (start < end)
{
temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
