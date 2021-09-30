#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: first input string
 * @src: second input string
 * @n: number of bytes to be used
 *
 * Description: use at most n bytes from src
 * Return: returns concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int j, i;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		++j;
	}
	while (src[i] != 0 && i < n)
	{
		dest[j] = src[i];
		++i;
		++j;
	}
	dest[j] = '\0';
	return (dest);
}
