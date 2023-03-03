#include <stdio.h>
#include <string.h>
/**
 * reverse_array - Main Code Insertion
 * @a: int type pointer.
 * @n: int type counter.
 */
void reverse_array(int *a, int n)
{
int i, j, temp;
for (i = 0, j = n - 1; i < j; i++, j--)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
