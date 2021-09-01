#include "main.h"
/**
 *print_sign - entry point
 *
 *@n : number to check
 *Return: 1 ->0, 0 = =, -1 <0
 */
int print_sign(int n)
{
int test;
if (n > 0)
{
_putchar('+');
test = 1;
}
else if (n == 0)
{
_putchar('0');
test = 0;
}
else
{
_putchar('-');
test = -1;
}
return (test);
}
