#include "main.h"
/**
 *  _islower - shows 1 if lowercase and 0 if otherwise
 * @c: the ASCII character
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c);
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
