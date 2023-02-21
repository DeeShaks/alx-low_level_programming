#include "main.h"
/**
 * int_isalpha(int c) - checks alphabetic character
 * @c: The character to be checked in ANSCII format
 * Return: 1 for alphabets(lower or upper) and 0 for anything else
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
