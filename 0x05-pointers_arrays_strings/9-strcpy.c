#include <stdio.h>
#include <string.h>
/**
 * _strcpy - Main Code Insertion
 * @dest: char type pointer.
 * @src: char type pointer.
*/
char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;
while (*src != '\0')
{  // loop until null terminator is reached
*dest = *src;  // copy character from src to dest 
dest++;  // move dest and src pointers to next character
src++;
}
*dest = '\0';  // add null terminator at end of string 
return dest_start;
}
