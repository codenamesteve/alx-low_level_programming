#include <stdio.h>
#include <stdlib.h>
/**
 * main - mutiply two arguments
 * @argc: int value of arguments
 * @argv: array of strings
 * Return: Always return zero
*/
int main(int argc, char *argv[])
{
int mul;
if (argc > 2)
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
