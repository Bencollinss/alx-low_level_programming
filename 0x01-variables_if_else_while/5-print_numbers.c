#include <stdio.h>

/**
 * main - prints all the single digits of base 10 from 0,
 * followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	char num[10] = "0123456789";
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(num[n]);
	}
	putchar('\n');
	return (0);
}
