#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
 *main - Description? This program will assign a random number to the
 *variable n each time it is executed and print whether
 *the number stored in the variable n is positive, negative or zero.
 *Attempting to code in C
 *
 *Let's go!
*/
int main(void) /* betty style doc for function main goes there */
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);

return (0);
}
