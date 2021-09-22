#include "main.h"

/**
 *print_most_numbers - start point of void
 *
 *Description: prints most digits
 *Return: 0
 */
void print_most_numbers(void)
{
char i;
for (i = '0'; i <= '9'; i++)
{
if (i == '2')
{
continue;
}
else if (i == '4')
{
continue;
}
else
{
_putchar(i);
}
}
_putchar('\n');
return (0);
}
