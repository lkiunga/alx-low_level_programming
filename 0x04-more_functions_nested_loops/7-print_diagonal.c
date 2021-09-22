#include "main.h"

/**
*print_diagonal - entry point
*
*@n: \value
*Return:void
*/
void print_diagonal(int n)
{
int i, b;
if (n <= 0)
{
_putchar('\n');
}
for (i = 0; i < n; i++)
{
for (b = 0; b < i; b++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
_putchar('\n');
return;
}
