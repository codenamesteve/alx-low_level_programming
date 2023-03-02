#include <stdio.h>
#include <string.h>
/**
 * _strncat - Main Code Insertion
 * @dest: char type pointer.
 * @src: char type pointer.
 * @n: number of items to concantenate
 * Return: return value of dest.
*/
char *_strncat(char *dest, char *src, int n)
{
char *p = dest;
int i = 0;
while (*p != '\0')
{
p++;
}
while (*src != '\0' && i < n)
{
*p++ = *src++;
i++;
}
*p = '\0';
return (dest);
}
