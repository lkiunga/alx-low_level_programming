#include "main.h"
/**
 *_isapha - print alpha
 *
 *@c : character to be traced
 *Return: 1 true 0 false
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
