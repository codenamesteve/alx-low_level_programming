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
char *dest_start = dest;
int i = 0;
while (*src != '\0' && i < n)
{
*dest = *src;
dest++;
src++;
i++;
}
*dest = '\0';
return (dest_start);
}
