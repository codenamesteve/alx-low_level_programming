#include <stdio.h>
/**
 * main - mutiply two arguments
 * @argc: int value of arguments
 * @argv: array of strings
 * Return: Always return zero
*/
int main(int argc, char *argv[])
{
int x;
int y;
int mul;
if (argc > 2)
{
x = atoi(argv[1]);
y = atoi(argv[2]);
mul = x * y;
printf("%d\n", mul);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
