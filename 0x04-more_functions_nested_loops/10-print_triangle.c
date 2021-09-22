#include "main.h"
/**
 * print_triangle - prints a triangle of size size
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
int b, i;
if (size <= 0)
_putchar('\n');
for (b = 1; b <= size; b++)
{
for (i = 1; i <= size; i++)
{
if (i <= (size - b))
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
return ;
}
