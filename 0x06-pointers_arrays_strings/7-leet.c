#include <stdio.h>
#include <string.h>
/**
 * leet - Main Code Insertion
 * @str: char type pointer.
 * Return: return value of str.
*/
char *leet(char *str)
{
char *leet_chars = "431071";
char *normal_chars = "aeotlAEOTL";
    
for (int i = 0; str[i] != '\0'; i++)
{
for (int j = 0; normal_chars[j] != '\0'; j++)
{
if (str[i] == normal_chars[j])
{
str[i] = leet_chars[j];
break;
}
}
}   
}
