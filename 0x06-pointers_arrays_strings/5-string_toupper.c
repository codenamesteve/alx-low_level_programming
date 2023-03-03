#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * string_toupper - Main Code Insertion
 *@str - string insertion
*/
char *string_toupper(char *str)
{
int i;
for (i = 0; i < strlen(str); i++)
{
str[i] = toupper(str[i]);
}
}
