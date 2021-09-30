#include "main.h"

/**
 *reverse_array - reverse an int array
 *@a:  array
 *@n: size of of array
 *
 *Description: Reverse the content of an int array through in place array
 *Return: void - always zero
 */

void reverse_array(int *a, int n)
{
	int left, right,  tmp;

	left = 0;
	right = n - 1;

	while (left < right)
	{
		tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}
}
