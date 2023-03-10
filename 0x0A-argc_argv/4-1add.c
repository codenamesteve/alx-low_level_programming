#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * is_number - checks if entry is integer
 * @str: string
 * Return: Always return zero
*/
int is_number(char *str)
{
if (!str)
{
return (0);
}
char *p = str;
while (*p)
{
if (!isdigit(*p))
{
return (0);
}
p++;
}    
return (1);
}

/**
 * main - sum positive arguments
 * @argc: int value of arguments
 * @argv: array of strings
 * Return: Always return zero
*/
int main(int argc, char *argv[])
{
int i;
int sum = 0;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (is_number(argv[i])
{
sum += atoi(argv[i]); 
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}
else
{
printf("%d\n", sum);
}
return (0);
}
