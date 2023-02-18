#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 sucess
 */
int main(void)
{
char n;
for (n = 'a'; n <= 'z'; n++)
{
if (n == 'q' || n == 'e')
{
}
else
{
putchar(n);
}
}
putchar('\n');

return (0);
}
