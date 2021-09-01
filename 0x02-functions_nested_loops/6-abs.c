#include "main.h"
/**
 *_abs -entry point
 *@n : no to be traced
 *
 *Description - returns the absolute value of numebrs
 *Return:  n
 */
int _abs(int n)
{
if (n < 0)
n = n * (-1);
return (n);
}
