#include <stdio.h>
/**
 *main - prints the mix
 *
 *Return: 0
 */
int main(void)
{
int c, d;
for (c = '0'; c < '9'; c++)
{
for (d = '0'; d < '9'; d++)
{
if (c != d && c < d)
{
putchar(c);
putchar(d);
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
