#include <stdio.h>
/**
 *main - PRINT ALPHABETS ECEXPET E AND Q
 *
 *Return:  0
 */
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}
