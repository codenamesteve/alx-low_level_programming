#include <stdio.h>
#include <string.h>
/**
 * _strcat - Main Code Insertion
 * @dest: char type pointer.
 * @src: char type pointer.
 * Return: return value of dest.
*/
char *_strcat(char *dest, char *src)
{
char *p = dest;
while (*p != '\0')
{
p++;
}
while (*src != '\0')
{
*p++ = *src++;
}
*p = '\0';
return (dest);
}
