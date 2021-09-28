#include "main.h"
/**
 *swap_int - Swap the values of two pointers
 *
 *@a: Pointer value 1
 *@b: Pointer value 2
 *Description: a function that swaps the values of two integers
 *Return: 0
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
return;
}
