#include "main.h"
/**
 *print_alphabet_x10 -entry point
 *
 *Description: print lowercase letter 10 times
 *Return: void
 */
void print_alphabet_x10(void)
{
char i = '0', lw;
while (i <= '9')
{
lw = 'a';
while (lw <= 'z')
{
_putchar(lw);
lw++;
}
_putchar('\n');
i++;
}
return;
}
