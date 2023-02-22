#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	char alp[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
