#include <stdlib.h>
/**
 * _strdup - copy string given as parameter
 * @str: string to copy
 * Return: Always zero
 */
char *_strdup(char *str)
{
	char *p;
	int index, len = 0;

	if (str == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		len++;
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	for (index = 0; str[index]; index++)
		p[index] = str[index];
	p[len] = '\0';
	return (p);
}
