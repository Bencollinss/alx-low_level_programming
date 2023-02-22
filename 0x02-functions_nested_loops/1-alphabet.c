#include "main.h"

/**
 * main - print the alphabets in small letters and in capital letters.
 *
 * Return: Always 0.
 */

void print_alphabet(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
