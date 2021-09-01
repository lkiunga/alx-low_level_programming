#include "main.h"
/**
 *main - print alpha 
 *
 *Return: 1 true 0 false
 */
int _isalpha(int c)
{
  return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')); 
}
