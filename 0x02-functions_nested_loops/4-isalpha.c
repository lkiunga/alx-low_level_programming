#include "main.h"
/**
 *_isalpha - print alpha
 *@c : character to be traced
 *
 *Description: output alphabets
 *Return: 1 true 0 false
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
