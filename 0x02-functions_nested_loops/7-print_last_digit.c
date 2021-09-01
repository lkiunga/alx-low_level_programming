#include "main.h"
/**
 *print_last_digit - entry point
 *
 *@n : the value traced
 *Return: n the last digit.
 */
int print_last_digit(int n)
{
int last;
if (n < 0)
{
n = n * -1;
}
last = n % 10;
_putchar('0' + last);
return (last);
}
