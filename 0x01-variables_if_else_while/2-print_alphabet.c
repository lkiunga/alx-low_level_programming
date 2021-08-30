#include <stdio.h>
#include <stdlib.h>
/**
 *main - out lowercase letters
 *
 *Return: return 0 on success
 */
int main(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
putchar(ch);
++ch;
}
putchar('\n');
return (0);
}
