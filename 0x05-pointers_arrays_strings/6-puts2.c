#include "main.h"
/**
 * puts2 - print character
 * @str: input string
 *
 * Description: prints character of a string, starting first character
 * Return: Always (0)
 */
void puts2(char *str)
{
	int count;
	int index;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	for (index  = 0; index < count; index++)
	{
		if (index % 2 != 0)
			continue;
		_putchar(*(str + index));
	}
	_putchar('\n');
}
