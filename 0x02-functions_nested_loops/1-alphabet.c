#include "main.h"
/**
 *print_alphabet - entry point
 *
 *Return:void
 */
void print_alphabet(void)
{
char lw = 'a';
while (lw <= 'z')
{
_putchar(lw);
lw++;
}
_putchar('\n');
return;
}
