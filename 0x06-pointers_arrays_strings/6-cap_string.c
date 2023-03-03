#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * string_toupper - Main Code Insertion
 *@str - string insertion
*/
char *cap_string(char *str)
{
int cap_next = 1;
for (int i = 0; str[i] != '\0'; i++)
{
if (cap_next && isalpha(str[i]))
{
str[i] = toupper(str[i]);
cap_next = 0;
}
else if (!isalpha(str[i]))
{
cap_next = 1;
}
}
return str;
}
