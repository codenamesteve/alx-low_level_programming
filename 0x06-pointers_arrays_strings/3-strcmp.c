#include <stdio.h>
#include <string.h>
/**
 * _strcmp - Main Code Insertion
 * @s1: char type pointer.
 * @s2: char type pointer.
 * Return: return value of dest.
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}

int main()
{
char s1[] = "Hello";
char s2[] = "World";
int result = _strcmp(s1, s2);
printf("%d\n", result); // output: -15
return (0);
}
