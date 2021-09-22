#include "main.h"

/**
 * print_square - prints a square of size size
 * @size: size of square
 *
 * Return: void
 */
void print_square(int size)
{
int i, b;
if (size <= 0)
{
putchar('\n'); 
}
for (b = 0; b < size; b++)
{
for (i = 0; i < size; i++)
{
putchar('#');
}
putchar('\n');
}
}
