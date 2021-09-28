#include "main.h"
/**
 * rev_string - reverses a string
 * @s: String to be passed to the function argument
 *
 * Return: Null
 */
void rev_string(char *s)
{
	int len;
	int a;
	int b;
	int temp;

	len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	a = 0;
	b = len - 1;

	while (a < b)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
		a++;
		b--;
	}
}
