#include "main.h"
/**
 *  _isalpha - shows 1 if lowercase or uppercase and 0 if otherwise
 * @c: the ASCII character
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 98))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
