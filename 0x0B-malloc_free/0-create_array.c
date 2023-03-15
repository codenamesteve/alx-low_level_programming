#include <stdlib.h>
/**
 * create_array - array of chars
 * @size: size of array
 * @c: the character to initialize the array
 * Return: Always zero
 */
char *create_array(unsigned int size, char c)
{
	char *p = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
