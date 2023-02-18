#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 sucess
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

int last_num
last_num = n % 10;

if (last_num > 5)
printf("The last digit of %d is %d and is greater than 5", n, last_num);
else if (last_num == 0)
printf("The last digit of %d is %d and is 0", n, last_num);
else if (last_num < 6 && last_num != 0)
printf("The last digit of %d is %d and is less than 6 and not 0", n, last_num);

return (0);
}
