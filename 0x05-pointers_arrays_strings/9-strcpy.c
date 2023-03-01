#include <stdio.h>
#include <string.h>
/**
 * _strcpy - Main Code Insertion
 * @dest: char type pointer.
 * @src: char type pointer.
 * Return: return value of dest.
*/
char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest_start);
}
