#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 sucess
 */
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = i + 1; j < 100; j++)
{
putchar('0' + (i / 10));
putchar('0' + (i % 10));
putchar(32);
putchar('0' + (j / 10));
putchar('0' + (j % 10));
if (i != 98 && j != 99)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
