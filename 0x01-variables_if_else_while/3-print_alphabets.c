#include <stdio.h>
#include <stdlib.h>
/**
 *main - print lower and uppercase alphabets
 *
 *Return: 0 on success
 */
int main(void)
{
/* outpot lowercase */
char ch;
ch = 'a';
while (ch <= 'z')
{
putchar(ch);
++ch;
}
ch = 'A';
while (ch <= 'Z')
{
putchar(ch);
++ch;
}
putchar('\n');
return (0);
}
