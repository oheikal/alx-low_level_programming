#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k = 97;
	int l = 65;

	while (k < 123)
	{
		putchar (k);
		k++;
	} while (l < 91);
	{
		putchar (l);
		l++;
	}
	putchar ('\n');
	return (0);
}
