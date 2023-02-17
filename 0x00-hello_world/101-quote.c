#include <unistd.h>
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDOUT_FILENO, message, sizeof(message)-1);

return (1);
}

#pragma GCC diagnostic pop
