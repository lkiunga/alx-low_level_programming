#include "main.h"
/**
 * more_numbers - Print 01234567891011121314
 *
 *Return: 0 on success
 */
void more_numbers(void)
{
int a, b, c, i;
for (i = 0; i <= 9; i++)
{
for (a = 0; a <= 14; a++)
{
if (a <= 9)
{
b = a;
}
else
{
c = a / 10;
b = a % 10;
_putchar('0' + c);
}
_putchar('0' + b);
}
_putchar('\n');
}
return;
}
