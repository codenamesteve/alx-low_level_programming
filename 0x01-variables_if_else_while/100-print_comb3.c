#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 sucess
 */
int main(void)
{
int i, j;
for (i = 48; i < 58; i++)
{
for (j = i + 1; j < 58; j++)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
