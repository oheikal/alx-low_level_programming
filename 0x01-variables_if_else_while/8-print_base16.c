#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int k = 97;

	for (; i < 58;)
	{
		putchar(i);
		i++;
	}
	for (; k < 103;)
	{
		putchar (k);
		k++;
	}
	putchar ('\n');
	return (0);
}
