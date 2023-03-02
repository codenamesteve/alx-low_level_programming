#include <stdio.h>
#include <string.h>
/**
 * _strncpy - Main Code Insertion
 * @dest: char type pointer.
 * @src: char type pointer.
 * @n: number of bytes
 * Return: return value of dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
size_t i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
