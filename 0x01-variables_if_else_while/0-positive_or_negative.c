#include <stdio.h>
#include <time.h>
/*
 *Attempting to code in C
 *
 *Let's go!                                                                                                                                                  
 */
int main(void){
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  if(n > 0)
    printf(n, "is positive%d\n");
  else if( n == 0)
    printf(n, "is zero%d\n");
  else
    printf(n, "is negative%d\n");

  return(0);
}
