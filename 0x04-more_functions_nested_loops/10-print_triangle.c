#include "main.h"

/**
 * print_triangle - prints a triangle of size size
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
int i, b;
if (size == 0)
{
putchar('\n');
}
for (b = 1; b <= size; b++)
{
for (i = 1; i <= size; i++)
{
if (b <= (size - i))
{
putchar(' ');
}
else
{
putchar('#');
}
}
putchar('\n');
}
}
