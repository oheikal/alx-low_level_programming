#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k, l;

	k = 97;

	while (k < 123)
	{
		putchar (k);
		k++;
	}
	l = 65;

	while (l < 91)
	{
		putchar (l);
		l++;
	}
	putchar ('\n');
	return (0);
}
