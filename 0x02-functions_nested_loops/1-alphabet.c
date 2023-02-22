#include <stdio.h>

/**
 * main - print the alphabets in small letters and in capital letters.
 *
 * Return: Always 0.
 */

void print_alphabet(void)

{
	char print_alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
	putchar(print_alphabet[i]);
	}
	putchar('\n');
}
