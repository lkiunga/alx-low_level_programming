#include <stdio.h>
/**
 *main - Print base 16
 *
 *Return: 0
 */
int main(void)
{
char a = '0';
char bw = 'a';
while (a <= '9')
{
putchar(a);
a++;
}
while (bw <= 'f')
{
putchar(bw);
bw++;
}
putchar('\n');
return (0);
}
