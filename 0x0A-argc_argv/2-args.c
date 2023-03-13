#include <stdio.h>
/**
 * main - print out all arguments in new lines
 * @argc: int value of arguments
 * @argv: array of strings
 * Return: Always return zero
*/
int main(int argc, char *argv[])
{
int i;
for(i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
     
