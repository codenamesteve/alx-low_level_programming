#include <stdio.h>
#include <string.h>
/**
 * print_array - Main Code Insertion
 * @a: char type pointer.
 * @n: char type pointer.
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != (n - 1))
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
putchar('\n');
}
