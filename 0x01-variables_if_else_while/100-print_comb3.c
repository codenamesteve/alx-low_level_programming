#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 sucess
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
for (j = i+1; j < 58; j++)
{
putchar(i);
putchar(j);
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
