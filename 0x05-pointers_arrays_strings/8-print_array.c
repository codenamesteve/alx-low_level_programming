#include <stdio.h>
#include <string.h>
/**
 * print_array - Main Code Insertion
 * @a: char type pointer.
 * @b: char type pointer.
*/
void print_array(int *a, int n)
{
int x = strlen(str);
int i;
for (i = 0; i < x; i++)
{
if(i != (x - 1))
{
putchar(a[i]);
puthchar(',');
putchar(' ');
}
else
{
putchar(a[i]);
}
}
putchar('\n');
}
