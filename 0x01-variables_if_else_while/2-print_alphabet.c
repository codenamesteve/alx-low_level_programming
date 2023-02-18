#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 sucess
 */
int main(void)
{
char alphabet[26];

for (int i = 0; i < 26; i++) {
alphabet[i] = 'a' + i;
putchar(alphabet[i]);
}
putchar("\n");

return (0);
}
