#include <stdio.h>
#include <string.h>
/**
 * _strcpy - Main Code Insertion
 * @a: char type pointer.
 * @n: char type pointer.
*/
char *_strcpy(char *dest, char *src)
{
int n = strlen(src);
size_t i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return dest;
}
