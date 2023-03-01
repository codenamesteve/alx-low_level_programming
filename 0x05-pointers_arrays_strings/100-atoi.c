#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - Main Code Insertion
 ** _atoi - Convert a string to an integer.
 * @s: A pointer to the string to be converted.
 *
 * Return: The integer value of the string, or 0 if no numbers are found.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int digit;

while (*s != '\0')
{
if (*s == '-')
{
sign = -1;
}
else if (*s == '+')
{
sign = 1;
}
else if (*s >= '0' && *s <= '9')
{
digit = *s - '0';
result = result * 10 + digit;
}
else if (result > 0)
{
/* We've already found a number, so stop here */
break;
}

s++;
}
return sign * result;
}
