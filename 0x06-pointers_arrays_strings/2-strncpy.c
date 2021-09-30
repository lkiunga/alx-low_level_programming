#include "main.h"
/**
 *_strncpy - copy string toanother variable
 *@dest: 1st input character
 *@src: 2nd input character
 *@n: Number of bytes
 *
 *Description: The function copies one string to the other
 *Return: returns description
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
++i;
}
while (i < n)
{
dest[i] = '\0';
++i;
}
return (dest);
}
