#include <stdio.h>
#include <string.h>
/**
 * _memset - Main Code Insertion
 * @s: char type pointer.
 * @b: char type pointer.
 * @n: int type pointer. 
* Return: return value of s.
*/
char *_memset(char *s, char b, unsigned int n)
{
for (unsigned int i = 0; i < n; i++)
{
s[i] = b;
}
return (*s);
}
